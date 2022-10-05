// Lab_02.cpp
// Чикеречко Андрій Андрійович
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double a;
	double m; // вхідний параметр
	double n; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "a = "; cin >> a;
	 z1 = pow((1 + a + a * a)  / (2 * a + a * a) + 2 - (1 - a + a * a) / (2 * a - a * a), -1) * (5 - 2 * a * a);
	z2 = (4-a*a) * 1.0/2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}