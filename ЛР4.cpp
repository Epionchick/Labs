#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int num;
	int cycle = 0;
	int cif = 1;

	cout << " [+] Введите число: ";
	cin >> num;

	while (cif <= 9) {
		int res;
		cout << "\n [+] Решите пример: " << num << " * " << cif << endl;
		cout << "\n [+] Ответ: ";
		cin >> res;
		if (num * cif == res) {
			cout << "\n\x1b[92m [+] Пример решен правильно!\x1b[0m\n";
			cif++;
			cycle++;
		}
		else {
			cout << "\n\x1b[91m [!] Ошибка, пример решен неверно!\x1b[0m\n";
		}
	}
	cout << "\n\x1b[92m [+] Примеры решены, поздравляем!\x1b[0m\n";

	int _; cin >> _;
	return 0;
}