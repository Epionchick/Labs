#include <iostream>
#include <string>

using namespace std;
int main() {
	setlocale(0, "");
	while (true)
	{
		cout << " [+] ������� ������������:\n\n [1] �������� | +\n [2] ��������� | -\n [3] ��������� | *\n [4] ������� | /\n [5] ������� �� ������� | %\n\n";
		cout << " [>] ������� ������: ";
		float num1, num2;
		char oper;
		cin >> num1 >> oper >> num2;
		if (oper == '+') {
			cout << "\n [+] �����: " << num1 + num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '-') {
			cout << "\n [+] �����: " << num1 - num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '*') {
			cout << "\n [+] �����: " << num1 * num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '/' and num2 == 0) {
			cout << "\n [+] ��������� ����������!" << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
			return 0;
		}
		if (oper == '/') {
			cout << "\n [+] �����: " << num1 / num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '%') {
			int n1 = num1;
			int n2 = num2;
			cout << "\n [+] �����: " << n1 % n2 << "\n" << endl;
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