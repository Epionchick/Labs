#include <iostream>
#include <string>

using namespace std;
int main() {
	setlocale(0, "");
	while (true)
	{
		cout << " [+] Функции калькулятора:\n\n [1] Сложение | +\n [2] Вычитание | -\n [3] Умножение | *\n [4] Деление | /\n [5] Деление от остатка | %\n\n";
		cout << " [>] Введите пример: ";
		float num1, num2;
		char oper;
		cin >> num1 >> oper >> num2;
		if (oper == '+') {
			cout << "\n [+] Ответ: " << num1 + num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '-') {
			cout << "\n [+] Ответ: " << num1 - num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '*') {
			cout << "\n [+] Ответ: " << num1 * num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '/' and num2 == 0) {
			cout << "\n [+] Дейстсвие невозможно!" << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
			return 0;
		}
		if (oper == '/') {
			cout << "\n [+] Ответ: " << num1 / num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '%') {
			int n1 = num1;
			int n2 = num2;
			cout << "\n [+] Ответ: " << n1 % n2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
	}
	system("pause");
	system("cls");
	int _; cin >> _;
	return 0;
}
