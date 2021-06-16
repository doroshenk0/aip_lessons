/*
Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом быстром роботе.
*/

#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

struct Robot 
{
    float gabariti;
    float ves;
    float skorost;
    int number;
};

Robot a;
Robot b;

int main() 
{
    cout << "Vvedite skorost robota 1: ";
    a.number = 1;
    cin >> a.skorost;

    cout << "Vvedite skorost robota 2: ";
    b.number = 2;
    cin >> b.skorost;

    if (a.skorost > b.skorost)
        cout << "Robot a (1) bistree, ego skorost " << a.skorost << " km/h";
    else
        cout << "Robot b (2) bistree, ego skorost " << b.skorost << " km/h";

    return 0;
}