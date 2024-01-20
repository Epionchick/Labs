#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
	int sel;
	int sel2;
	int len;
	string v = "\n ";
	string sim = "";
	cout << "\x1b[0m";

	cout << "\n [+] Программа - “Геометрические фигуры” \n\n [1] Линия\n\n [>] Выберите фигуру: ";
	cin >> sel;
	system("cls");

	if(sel != 1) {
		cout << "\x1b[31m\n [-] Неккоректный ввод!\x1b[0m\n\n Введите число ещё раз: ";
		cin >> sel;
		system("cls");
	}

	while (sel == 1) {
		cout << "\x1b[0m";
		cout << "\n [+] Фигура: “Линия”\n\n [1] Горизонтальная\n [2] Вертикальная\n\n [+] Выберите тип: ";
		cin >> sel2;

		switch (sel2) {
		case 1:
			system("cls");
			cout << "\n [+] Длина линии (От 0 до 30): ";
			cin >> len;
			if (len < 0 or len > 30) {
				cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n" << endl;
				cout << " ";
				system("pause");
				system("cls");
				continue;
			}
			else {
				cout << "\n [+] Текстура линии: ";
				cin >> sim;
			}

			cout << "\n [+] Цвет фигуры\n\n [1] Синий\n [2] Зелёный\n [3] Морской волны\n [4] Красный\n [5] Фиолетовый\n [6] Жёлтый\n [7] Светло-серый\n [8] Темно-серый\n [9] Светло-синий\n [10] Светло-зеленый\n [11] Светлый морской волны\n [12] Светло-красный\n [13] Светло-фиолетовый\n [14] Желтый\n [15] Белый\n\n";
			cout << " [>] Выберите цвет: ";

			short color;
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
			system("cls");
			cout << v;
			for (int i = 0; i < len; ++i) {
				cout << sim;
			}
			cout << v << "\n ";
			system("pause");
			system("cls");
			break;

		case 2:
			system("cls");
			cout << "\n [+] Длина линии (От 0 до 30): ";
			cin >> len;
			if (len < 0 or len > 30) {
				cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n" << endl;
				cout << " ";
				system("pause");
				system("cls");
				continue;
			}
			else {
				cout << "\n [+] Текстура линии: ";
				cin >> sim;
			}

			cout << "\n [+] Цвет фигуры\n\n [1] Синий\n [2] Зелёный\n [3] Морской волны\n [4] Красный\n [5] Фиолетовый\n [6] Жёлтый\n [7] Светло-серый\n [8] Темно-серый\n [9] Светло-синий\n [10] Светло-зеленый\n [11] Светлый морской волны\n [12] Светло-красный\n [13] Светло-фиолетовый\n [14] Желтый\n [15] Белый\n\n";
			cout << " [>] Выберите цвет: ";

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
			system("cls");
			cout << v;
			for (int i = 0; i < len; ++i) {
				cout << sim << endl << " ";
			}
			cout << v << "\n ";
			system("pause");
			system("cls");
			break;
		default:
			cout << "\n\x1b[91m [!] Некорректный ввод!\x1b[0m\n" << endl;
			cout << " ";
			system("pause");
			system("cls");
		}
	}

	int _; cin >> _;
	return 0;
}