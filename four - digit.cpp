#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << ("Введите целое шести значное число: ");
	cin >> a;

	if (a >= 100000 && a <= 999999) {
		if ((a / 100000) + ((a / 10000) % 10) + ((a / 1000) % 10) == ((a / 100) % 10) + ((a / 10) % 10) + (a % 10))
		cout << "счастливое: " << a;
		else cout << "не счастливое" << a;
	}
	else cout << "Ошибка число должно состоять из 6 цифр";
	
}
