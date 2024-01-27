#include <iostream>
#include <string>

using namespace std;
int main() {
	setlocale(0, "");
	while (true)
	{
		cout << " [+] Ôóíêöèè êàëüêóëÿòîðà:\n\n [1] Ñëîæåíèå | +\n [2] Âû÷èòàíèå | -\n [3] Óìíîæåíèå | *\n [4] Äåëåíèå | /\n [5] Äåëåíèå îò îñòàòêà | %\n\n";
		cout << " [>] Ââåäèòå ïðèìåð: ";
		float num1, num2;
		char oper;
		cin >> num1 >> oper >> num2;
		if (oper == '+') {
			cout << "\n [+] Îòâåò: " << num1 + num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '-') {
			cout << "\n [+] Îòâåò: " << num1 - num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '*') {
			cout << "\n [+] Îòâåò: " << num1 * num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '/' and num2 == 0) {
			cout << "\n [+] Äåéñòñâèå íåâîçìîæíî!" << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
			return 0;
		}
		if (oper == '/') {
			cout << "\n [+] Îòâåò: " << num1 / num2 << "\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
		if (oper == '%') {
			int n1 = num1;
			int n2 = num2;
			cout << "\n [+] Îòâåò: " << n1 % n2 << "\n" << endl;
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
