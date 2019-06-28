#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printTabl(const int mode);

int main(int argc, char **argv)
{
printTabl(5);
printTabl(8);
printTabl(10);
printTabl(16);

return 0;
}

void printTabl(const int mode) {

if (mode == 8) {
cout « "Режим " « dec « mode « endl;
for (int i = 0; i < mode; i++) {
for (int j = 0; j < mode; j++) {
cout « oct « setw(4) « (i+1)*(j+1);
}
cout « endl;
}
return;
}
if (mode == 10) {
cout « "Режим " « dec « mode « endl;
for (int i = 0; i < mode; i++) {
for (int j = 0; j < mode; j++) {
cout « dec « setw(4) « (i+1)*(j+1);
}
cout « endl;
}
return;
}
if (mode == 16) {
cout « "Режим " « dec « mode « endl;
for (int i = 0; i < mode; i++) {
for (int j = 0; j < mode; j++) {
cout « hex « setw(4) « (i+1)*(j+1);
}
cout « endl;
}
return;
}
cout « "unknown mode\n";
return;
} 