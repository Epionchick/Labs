#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	while (true) {
		cout << " [>] ������� ����� �� 0 �� 100: ";
		int num;
		cin >> num;

		if ((num >= 0) && (num <= 10)) {
			cout << "\n [+] ����� � ���������: 0 - 10\n\n";
		}
		else if ((num >= 11) && (num <= 20)) {
			cout << "\n [+] ����� � ���������: 11 - 20\n\n";
		}
		else if ((num >= 21) && (num <= 30)) {
			cout << "\n [+] ����� � ���������: 21 - 30\n\n";
		}
		else if ((num >= 31) && (num <= 40)) {
			cout << "\n [+] ����� � ���������: 31 - 40\n\n";
		}
		else if ((num >= 41) && (num <= 50)) {
			cout << "\n [+] ����� � ���������: 41 - 50\n\n";
		}
		else if ((num >= 51) && (num <= 60)) {
			cout << "\n [+] ����� � ���������: 51 - 60\n\n";
		}
		else if ((num >= 61) && (num <= 70)) {
			cout << "\n [+] ����� � ���������: 61 - 70\n\n";
		}
		else if ((num >= 71) && (num <= 80)) {
			cout << "\n [+] ����� � ���������: 71 - 80\n\n";
		}
		else if ((num >= 81) && (num <= 90)) {
			cout << "\n [+] ����� � ���������: 81 - 90\n\n";
		}
		else if ((num >= 91) && (num <= 100)) {
			cout << "\n [+] ����� � ���������: 91 - 100\n\n";
		}
		else if (num < 0) {
			cout << "\n\x1b[91m [!] ������! ����� ������ 0!\x1b[0m\n\n";
		}
		else if (num > 100) {
			cout << "\n\x1b[91m [!] ������! ����� ������ 100!\x1b[0m\n\n";
		}
	}
	int _; cin >> _;
	return 0;
}