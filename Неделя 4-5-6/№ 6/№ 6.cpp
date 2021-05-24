// Пользователь вводит день месяца. Вывести на экран день недели. 
// Считаем, что 1-е число месяца это вторник.

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter day number: ";
    cin >> a;

    if (a> 0 && a < 32) 
    {
        switch (a % 7) 
        {
        case 0:
            cout << "Monday";
            break;
        case 1:
            cout << "Tuesday";
            break;
        case 2:
            cout << "Wednesday";
            break;
        case 3:
            cout << "Thursday";
            break;
        case 4:
            cout << "Friday";
            break;
        case 5:
            cout << "Saturday";
            break;
        case 6:
            cout << "Sunday";
            break;
        }
    }
    else
        cout << "Error";
    

    return 0;
}
