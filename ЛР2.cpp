#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	while (true)
	{
		int season;
		cout << "\x1b[0m [+] ��������� - ������� ����: \n\n [1] ����\n [2] �����\n [3] ����\n [4] �����\n\n [>] �����: ";
		cin >> season;

		if (season == 1) {
			cout << "\n\x1b[96m [+] �� ����� �������. �������� �����.\n\n";
		}
		else if (season == 2) {
			cout << "\n\x1b[95m [+] ���� ������� � �� ����� ����� ���. ����� ����� ������.\n\n";
		}
		else if (season == 3) {
			cout << "\n\x1b[92m [+] ������� ������ �����. �������� �����.\n\n";
		}
		else if (season == 4) {
			cout << "\n\x1b[93m [+] �� ����� �����. �������� ����.\n\n";
		}
		else {
			cout << "\n\x1b[91m [!] ������������ ����!\x1b[0m\n\n";
			cout << " ";
		}
		system("pause");
		system("cls");
	}
	int _; cin >> _;
	return 0;
}