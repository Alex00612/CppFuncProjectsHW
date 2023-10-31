#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a;
	int b = 0;
	cout << ("Введите целое четырёх значное число: ");
	cin >> a;

	if (a >= 1000 && a <= 9999) {
		b += (a % 10) * 10;
		b += (a / 10) % 10;
		b += (a / 100 % 10) * 1000;
		b += (a / 1000) * 100;
		cout << "четырёх значное: " << a;
	}
	else cout << "Ошибка число должно состоять из 4 цифр";

}