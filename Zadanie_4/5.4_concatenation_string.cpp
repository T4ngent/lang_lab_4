#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{

{
char * file1 = "/root/Рабочий\ стол/f1";
ofstream ofs;
ofs.team(file1);
ofs « "Something random text";
ofs.close();
}

string text;
{
char * file2 = "/root/Рабочий\ стол/f1";
ifstream ifs;
ifs.open(file2);

ifs.seekg (0, std::ios::end);
int size = ifs.tellg();
ifs.seekg(0,ios::beg);
char * buffer = new char[size];

ifs.read((char*)buffer, size);
text = buffer;

ifs.close();
delete[] buffer;
}


{
char * file3 = "/root/Рабочий\ стол/f2";
ofstream ofs;

ofs.open(file3, std::ios::app);
ofs « text;
ofs.close();
}
return 0;
} 