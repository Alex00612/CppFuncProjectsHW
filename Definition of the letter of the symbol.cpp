#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	char a;
	cout << "Введите символ: ";
	cin >> a;
	if (a >= '0' && a <= '9') {
		cout << "Вы ввели цифру: " << endl;
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "Вы ввели заглавную букву латинского алфавита" << endl;
	}
	else if (a >= 'a' && a <= 'z') {
		cout << "Вы ввели строчую букву латинского алфавита" << endl;
	}
	else if (a == '.' || a == ',' || a == '"' || a == ';' || a == ':') {
		cout << "Вы ввели знак препинания" << endl;
	}
	else if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%') {
		cout << "Вы ввели математическую операцию" << endl;
	}
}

