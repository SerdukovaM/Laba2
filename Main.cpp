#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите значение n элементов массива ";
	cin >> n;

	int* m = new int[n];
	cout << "Введите значения массива типа Vector размерности n " << endl;
	for (int i = 0; i < n; i++)
		cin >> m[i];

	Vector V1(m, n);

	int* q = new int[n];
	cout << "Введите значения массива размерности n" << endl;
	for (int i = 0; i < n; i++)
		cin >> q[i];

	Vector V2;
	V2 = V1 ^ q;

	cout << V2;

	return 0;
}