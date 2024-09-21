#include <iostream>
#include <string>

using namespace std;
int main() {
	setlocale(0, "");
	int choise = 0;
	int choise2 = 0;
	string name = "User";
	string dif = "0123456789ABCDEF";
	int quantity = 5;
	int answer;
	int lives = 3;
	int points = 0;
	int color = 0;
	char heart = '\3';

	while (choise != 4) {
		system("cls");
		color;
		cout << "\n [+] Добро пожаловать в игру “Викторина”!\n\n [+] Меню:\n\n [1] Начать игру\n [2] Настройки\n [3] Правила\n [4] Выйти\n\n [>] Выбор: ";
		cin >> choise;

		if (choise == 4) {
			return 0;
		}
		if (choise == 3) {
			system("cls");
			cout << "\n [+] Правила:\n\n - Игрок получает очки за правильный ответ на вопрос\n - Игрок проходит дальше за правильный ответ\n - Игрок теряет жизнь при неправильном ответе\n\n ";
			system("pause");
			system("cls");
		}
		if (choise == 2) {
			system("cls");
			cout << "\n [*] Настройки:\n\n [1] Редактирование имя игрока\n [2] Изменение количества вопросов в игре\n [3] Изменение цвета интерфейса\n [4] Выход\n\n [>] Выбор: ";
			cin >> choise2;
			if (choise2 == 1) {
				cout << "\n [>] Введите имя игрока: ";
				cin >> name;
				system("cls");
				continue;
			}
			if (choise2 == 2) {
				system("cls");
				cout << "\n [+] Изменение количества вопросов в игре\n\n [+] Вопросов: " << quantity << "\n\n [>] Введите желаемое количество вопросов: ";
				cin >> quantity;
				cout << "\n [+] Количество вопросов изменено на " << quantity << endl;
				continue;
			}
			if (choise2 == 3) {
				system("cls");
				cout << "\n [+] Изменение цвета интерфейса\n\n [1] Синий\n [2] Зелёный\n [3] Морской волны\n [4] Красный\n [5] Фиолетовый\n [6] Жёлтый\n [7] Светло-серый\n [8] Темно-серый\n [9] Светло-синий\n [10] Светло-зеленый\n [11] Светлый морской волны\n [12] Светло-красный\n [13] Светло-фиолетовый\n [14] Желтый\n [15] Белый\n\n [>] Выбор: ";
				cin >> color;
				switch (color) {
				case 0:
					system("color F0");
					break;
				case 1:
					system("color 1");
				case 2:
					if (color == 2) {
						system("color 2");
						break;
					}
				case 3:
					if (color == 3) {
						system("color 3");
						break;
					}
				case 4:
					if (color == 4) {
						system("color 4");
						break;
					}
				case 5:
					if (color == 5) {
						system("color 5");
						break;
					}
				case 6:
					if (color == 6) {
						system("color 6");
						break;
					}
				case 7:
					if (color == 7) {
						system("color 7");
						break;
					}
				case 8:
					if (color == 8) {
						system("color 8");
						break;
					}
				case 9:
					if (color == 9) {
						system("color 9");
						break;
					}
				case 10:
					if (color == 10) {
						system("color 1A");
						break;
					}
				case 11:
					if (color == 11) {
						system("color 0B");
						break;
					}
				case 12:
					if (color == 12) {
						system("color 0C");
						break;
					}
				case 13:
					if (color == 13) {
						system("color 0D");
						break;
					}
				case 14:
					if (color == 14) {
						system("color 0E");
						break;
					}
				case 15:
					if (color == 15) {
						system("color 0F");
						break;
					}
				default:
					if (color > 15) {
						cout << "\n\x1b[91m [!] Цвет отсутствует в списке!\x1b[0m" << endl;
						break;
					}
				}
			}
			if (choise2 == 4) {
				continue;
			}
			if (choise2 > 4) {
				cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n" << endl;
				cout << " ";
				system("pause");
			}
		}
		while (choise == 1) {
			system("cls");
			string q1 = "\n [+] На каком языке написана эта программа?\n\n [1] C++	[3] C\n\n [2] C#		[4] В++\n\n [>] Выбор: ";
			string q2 = "\n [+] Мечтают ли адроиды об электоовцах?\n\n [1] Да		[2] Нет\n\n [>] Выбор:";
			string q3 = "\n [+]";
			string q4 = "";
			string q5 = "";
			string q6 = "";
			string q7 = "";
			string q8 = "";
			string q9 = "";
			string q10 = "";
			string q11 = "";
			string q12 = "";
			string q13 = "";
			string q14 = "";
			string q15 = "";
			cout << "\n [+] Викторина началась!\n\n [+] Игрок: " << name << " | Жизни: " << heart;
			cout << " | Очки: " << points << " | Сложность: " << dif[quantity] << "/15" << endl;
			cout << "\n [>] Выберите сложность: ";
			cin >> quantity;
			while (lives != 0) {
				switch (quantity) {
				case 1:
					system("cls");
					cout << "\n [+] Жизни: " << lives << "| [+] Очки: " << points << endl;
					cout << q1;
					cin >> answer;
					if (answer == 1) {
						points++;
						cout << "\n [+] Ответ верный!\n";
						cout << "\n [!] Вы победили!\n";
						return 0;
					}
					if (answer != 1) {
						lives--;
						cout << "\n [-] Ответ неверный!\n";
						system("pause");
						system("cls");
						continue;
					}
				case 2:
					cout << q1;
					cin >> answer;
					if (answer == 1) {
						points++;
						cout << "\n [+] Ответ верный!\n";
						cout << q2;
						cin >> answer;
						if (answer == 2) {
							points++;
							cout << "\n [+] Ответ верный!\n";
							break;
						}
					}
					if (answer != 1) {
						lives--;
						cout << "\n [-] Ответ неверный!\n";
						break;
					}
				case 3:
					cout << q1, q2, q3;
				case 4:
					cout << q1, q2, q3, q4;
				case 5:
					cout << q1, q2, q3, q4, q5;
				case 6:
					cout << q1, q2, q3, q4, q5, q6;
				case 7:
					cout << q1, q2, q3, q4, q5, q6, q7;
				case 8:
					cout << q1, q2, q3, q4, q5, q6, q7, q8;
				case 9:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9;
				case 10:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
				case 11:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11;
				case 12:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12;
				case 13:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13;
				case 14:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14;
				case 15:
					cout << q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15;
				default:
					if (quantity > 15) {
						cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n" << endl;
					}
				}
			}
			cout << "\n [!] Вы проиграли!\n\n";
			cout << " ";
			system("pause");
			break;
		}
		if (choise > 4) {
			cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n" << endl;
			cout << " ";
			system("pause");
		}
	}
	int _; cin >> _;
	return 0;
}
