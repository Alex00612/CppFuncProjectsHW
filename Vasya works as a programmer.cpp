#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a, b, c, s;
	cout << "Выберите что вы хотите узнать: " << endl;
	cout << "1 - количество строк кода, необходимое написать Васе" << endl;
	cout << "2 - количество опозданий Васи" << endl;
	cout << "3 - доход Васи" << endl;
	cin >> s;
		switch (s) {
		case 1: 
			cout << "желаемый доход" << endl;
			cin >> a ;
			cout << "количество опозданий" << endl;
			cin  >> b;
			c = (a + b / 3 * 20) * 2;
				cout << "Количество строк кода, необходимое написать Васе: " << c << endl;
			break;
		case 2: 
			cout << "строк " << endl;
			cin >> c;
			cout << "желаемый доход" << endl;
			cin >> a;
			b = (c / 2 - a) * 3 / 20;
			if (b < 0) 
				cout << "Ошибка" << endl;
			
			else
				cout << "Количество опозданий Васи: " << b << endl;
			break;
		case 3: 
			cout << "строк" << endl;
			cin >> c;
			cout << "количество опозданий" << endl;
			cin >> b;
			a = (c / 2) - (b / 3 * 20);
			if (a < 0) 
				cout << "Ошибка" << endl;
			
			else
				cout << "Доход Васи равен: " << a << endl;
			break;
		default:
			cout << "Ошибка";
	}
}