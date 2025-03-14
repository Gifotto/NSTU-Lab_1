/*
1.	Геометрические фигуры. Реализовать функции вычисления параметров для двух-трех следующих геометрических фигур (по одной фигуре на студента):
	a.	Прямоугольник – периметр, площадь, длина диагонали;
*/

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int FuncRectangle(int a, int b) {
	enum rec { P, S, D };
	int PSD, vib;
	cout << "Периметр — 0\nПлощадь — 1\nДиагональ — 2\n";
	cin >> vib;
	if (vib == rec::P) {
		PSD = 2 * (a + b);
	}
	else if (vib == rec::S) {
		PSD = a * b;
	}
	else if (vib == rec::D) {
		PSD = sqrt(a * a + b * b);
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Введите стороны прямоугольника: ";
	cin >> a >> b;
	if (a <= 0 or b <= 0) {
		cout << "Ошибка размера";
		return 0;
	}

	cout << FuncRectangle(a, b);
}

