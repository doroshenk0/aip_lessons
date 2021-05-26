// Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
// Н = 10, М = 35, Ш = 5, то вывод должен быть таким : 10 15 20 25 30 35. Значения Н, М,
// Ш указываются пользователем(считываются с клавиатуры или из файла)

#include <iostream>

int begin, end, dx;
void counting(int begin, int end, int dx);

int main()
{
    std::cout << "Enter begin, end and dx (use space): ";
    std::cin >> begin >> end >> dx;
    counting(begin, end, dx);
    return 0;
}

void counting(int begin, int end, int dx) 
{
    while (end >= begin) 
    {
        std::cout << begin << "  ";
        begin = begin + dx;
    }
    std::cout << std::endl;
}