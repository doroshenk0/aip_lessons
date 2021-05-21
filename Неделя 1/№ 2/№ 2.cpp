// Пользователь вводит параметры фигуры. Найти периметр и площадь круга

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	cout << "Enter the radius: ";
	cin >> a;

	c = 2 * 3.14 * a;
	d = 2 * 3.14 * a * a;

	cout << "p.kryga: " << d << endl;
	cout << "s.kryga: " << c << endl;

	std::getchar(); 
	std::getchar();

	return 0;
}