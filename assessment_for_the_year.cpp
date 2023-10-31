#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d;
	cout << "Введите оценку за 1 четверть: ";
	cin >> a;
	cout << "Введите оценку за 2 четверть: ";
	cin >> b;
	cout << "Введите оценку за 3 четверть: ";
	cin >> c;
	cout << "Введите оценку за 4 четверть: ";
	cin >> d;
	cout << round ((a + b + c + d)/4);


}