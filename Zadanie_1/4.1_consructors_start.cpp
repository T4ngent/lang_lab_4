#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class String
{
    char * value;
    int len;
public:
    String():value(new char[1] {}), len(0) {};  // конструктор по умолчанию

    String(const String& s) {   // конструктор копирования
        len = s.len;
        value = new char[len + 1];  // выделить память под новый буфер
        for (int i = 0; i <= len; i++)  // скопировать строку в новый буфер
            value[i] = s.value[i];
    }

    friend ostream& operator<<(ostream& outputStream, const String & s) {   //перегруженный оператор для вывода строки в поток
        return outputStream << s.value;
    }

    ~String() {
        delete[] value;
    }
};

int main()
{
    return 0;
}