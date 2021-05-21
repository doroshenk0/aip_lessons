// Сделать конвертер величин. Формат ввода: Направление_Перевода Величина. 
// Время (неделя, час, сутки)

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    float  a;

    std::cout << "Enter the value: ";
    std::cin >> a;
    std::cout << a << " week = " << a * 168 << " hour " << std::endl;
    std::cout << a << " week = " << a * 7   << " day  " << std::endl;
    std::cout << a << " hour = " << a / 168 << " week " << std::endl;
    std::cout << a << " hour = " << a / 24  << " day  " << std::endl;
    std::cout << a << " day  = " << a / 7   << " week " << std::endl;
    std::cout << a << " day  = " << a * 24  << " hour " << std::endl;

    std::getchar();
    std::getchar();

    return 0;
}