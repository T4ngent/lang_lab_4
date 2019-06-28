#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void calcMiddle(const string file);

int main(int argc, char **argv)
{


char * file = "/root/Рабочий\ стол/summ";
/*Чтобы сделать файл
float array[5];

for (int i = 0; i < 5; i++) {
array[i] = (float)i*i*1.1;
cout « array[i] « endl;
}


ofstream ofs;
ofs.open(file, ios::binary | ios::trunc | ios::out);
ofs.write((char*)array, sizeof array);
ofs.close();
*/

calcMiddle((string)file);
return 0;
}

void calcMiddle(const string file) {

const int SIZE = 5;
float array[SIZE];
ifstream ifs;
ifs.open(file, ios::binary | ios::in);

ifs.seekg (0, std::ios::end);
int size = ifs.tellg();
ifs.seekg(0,ios::beg);

ifs.read((char*)array, 20);

ifs.close();

float summ = 0;
for (int i = 0; i < SIZE; i++) {
cout « array[i] « endl;
summ +=array[i];
}
cout « summ/SIZE « endl;
} 
 
int main() {
	String str = "C-String";
	String str2(str);
	cout << str2 << endl;
	return 0;
}