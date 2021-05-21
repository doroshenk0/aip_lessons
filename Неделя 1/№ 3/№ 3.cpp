// Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого числа

#include <iostream>

int main()
{
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    std::cout << "number in ^2: " << a * a << std::endl;
    std::cout << "number in ^3: " << a * a * a << std::endl;

    std::getchar(); 
    std::getchar();

    return 0;

}


