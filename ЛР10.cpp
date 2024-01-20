#include <iostream>
#include <ctime>
#include <string>

using namespace std;
int main() {
	while (true){
		setlocale(0, "");
		srand(time(0));

		int choise;
		int pop = 5; //Кол-во попыток
		int y_num = 0;
		int start = 1; //При выборе, начинает игру
		int exit = 2; //При выборе, закрывает консоль
		bool gameOver = false;
		int num = rand() % 10; //Случайное число от 0 до 10

		cout << "\n [+] Игра - Угадайка\n\n [+] Меню:\n\n [1] Начать игру\n [2] Выйти\n\n [>] Ввод: "; //Меню
		cin >> choise;

		if (choise == start) {
			system("cls");
			while (!gameOver) { //Пока цикл не примет значение истины, игра будет продолжаться
				cout << "\n [+] Угаданных чисел: [" << y_num << " / 3]\n\n [+] Попыток: [" << pop << "]\n\n [>] Угадать число: ";
				cin >> num;
				system("cls");
				if (num == rand() % 10) {
					cout << "\x1b[32m\n [+] Вы угадали число!\n\x1b[0m";
					pop = 5;

					y_num += 1;
					if (y_num == 3) {
						cout << "\n [+] Вы победили!\n"; //Сообщение о победе
						return 0;
					}
					continue;
				}
				else
					pop -= 1; //Уменьшение кол-ва попыток
					cout << "\x1b[91m\n [-] Вы не угадали число!\n\x1b[0m";
					if (pop == 0) {
						cout << "\x1b[91m\n [!] Вы проиграли!\n\n\x1b[0m"; //Сообщение о проигрыше
						return 0;
					}
					continue;

				}
			}
		if (choise == exit) {
			return 0;
			system("exit"); //Выход
			}
		if (choise == 0, choise > 2) {
			cout << "\x1b[91m\n [!] Некорректный ввод!\n\n\x1b[0m"; //На случай некорректного ввода в меню
			system("pause");
			system("cls");
			}
	}
	int _; cin >> _;
	return 0;
}