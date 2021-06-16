//Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
//атрибута: вещественную часть и мнимую. Объявите два числа и получите их
//значения от пользователя.
//Напишите функцию, которая будет возвращать тоже самое число в
//тригонометрической форме.

#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

float z, a, b;

struct Kompl
{
    float re = a;
    float im = b;
    float cosfi;
    float sinfi;
    float r;
};
                                       
Kompl number;                          

void trig();

int main() {

    cout << "Vvedite veshestvennuyu chast shisla ";
    cin >> a;
    cout << "Vvedite mnimuyu chat chisla ";
    cin >> b;

    cout << "z=" << a << "+" << "i*" << b << " - algebraicheskaya forma" << endl;

    trig();

    return 0;
}


void trig() 
{
    number.r = sqrt((a * a) + (b * b));
    number.cosfi = (a / number.r);
    number.sinfi = (b / number.r);

    cout << "z=" << number.r << "*(" << number.cosfi << "*i*" << number.sinfi << ")" << " - trigonometricheskaya forma";
}