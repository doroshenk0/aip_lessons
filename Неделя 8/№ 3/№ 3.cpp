﻿// Пользователь задаёт число Ч и Х. Посчитать y:

#include <iostream>

using namespace std;

int h;
int x;
float y = 0;

void Function(int h1, int x1)
{
	for (int i = 2; i < h1; i++)
	{
		y = y + 1.0 / (i * x1);
	}
	cout << y;
}

int main()
{
	cout << "Enter h and x: " << endl;
	cin >> h >> x;
	Function(h, x);

	return 0;
}
