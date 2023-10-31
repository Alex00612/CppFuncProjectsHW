#include <iostream>
using namespace std;
int main()
{

	setlocale(LC_ALL, "");
	float a, b, c;
	cout << "Введите оценку за 1 месяц: ";
	cin >> a;
	cout << "Введите оценку за 2 месяц: ";
	cin >> b;
	cout << "Введите оценку за 3 месяц: ";
	cin >> c;
	cout << a + b + c;
}
