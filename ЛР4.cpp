#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int num;
	int cycle = 0;
	int cif = 1;

	cout << " [+] ������� �����: ";
	cin >> num;

	while (cif <= 9) {
		int res;
		cout << "\n [+] ������ ������: " << num << " * " << cif << endl;
		cout << "\n [+] �����: ";
		cin >> res;
		if (num * cif == res) {
			cout << "\n\x1b[92m [+] ������ ����� ���������!\x1b[0m\n";
			cif++;
			cycle++;
		}
		else {
			cout << "\n\x1b[91m [!] ������, ������ ����� �������!\x1b[0m\n";
		}
	}
	cout << "\n\x1b[92m [+] ������� ������, �����������!\x1b[0m\n";

	int _; cin >> _;
	return 0;
}