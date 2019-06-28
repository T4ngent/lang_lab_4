#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
{
const int TEST_ARRAY_SIZE = 10;
double startArray[TEST_ARRAY_SIZE];

for (int i = 0; i< TEST_ARRAY_SIZE; i++) {
startArray[i] = rand();
cout « startArray[i] « "\t" « rand() « endl;
}
char * file = "/root/Рабочий\ стол/five";
ofstream ofs;
ofs.open(file, ios::binary | ios::trunc | ios::out);
ofs.write((char*)startArray, TEST_ARRAY_SIZE * sizeof startArray[0]);
ofs.close();
}

{
char * file = "/root/Рабочийстол/five";

ifstream ifs;
ifs.open(file, ios::binary | ios::in);

ifs.seekg (0, std::ios::end);
int size = ifs.tellg()/8 ; cout « "size: " « size « endl;
ifs.seekg(0,ios::beg);

double * doubleArray = new double[size];

ifs.read((char*)doubleArray, size * sizeof doubleArray[0]);
ifs.close();

float * floatArray = new float[size];
for (int i = 0; i < size; i++) {
floatArray[i] = 1/doubleArray[i];
cout « 1/doubleArray[i] « endl;
}
cout « "END" « endl;
delete[] floatArray;
delete[] doubleArray;
}
return 0;
} 
