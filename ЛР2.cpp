#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	while (true)
	{
		int season;
		cout << "\x1b[0m [+] Программа - времена года: \n\n [1] Зима\n [2] Весна\n [3] Лето\n [4] Осень\n\n [>] Выбор: ";
		cin >> season;

		if (season == 1) {
			cout << "\n\x1b[96m [+] За окном холодно. Наденьте шапку.\n\n";
		}
		else if (season == 2) {
			cout << "\n\x1b[95m [+] Снег растаял и на улице много луж. Лучше обуть калоши.\n\n";
		}
		else if (season == 3) {
			cout << "\n\x1b[92m [+] Сегодня сильно печёт. Наденьте кепку.\n\n";
		}
		else if (season == 4) {
			cout << "\n\x1b[93m [+] На улице дождь. Возьмите зонт.\n\n";
		}
		else {
			cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n\n";
			cout << " ";
		}
		system("pause");
		system("cls");
	}
	int _; cin >> _;
	return 0;
}