#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
const int NUMBER_COUNT = 10;
const char * file = "/root/Рабочий стол/example";
int array[NUMBER_COUNT];

ifstream ifs;
ifs.open(file, ios::binary | ios::in);

for (int i = 0; i < NUMBER_COUNT; i+=5) {
ifs.read((char*)array, sizeof array);
}

for (auto f : array) cout « oct « f « "\t" « dec « f « "\t" « hex « f « endl;
ifs.close();


return 0;
}