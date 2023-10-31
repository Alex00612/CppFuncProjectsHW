#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << "Введите число: ";
	cin >> a;
	int b = a;
	for (int i = 1; i < 7; i++) {
		cout << "Введите число: ";
		cin >> a;
		if (b < a) b = a;
	}
	cout << "макс: " << b;
}
