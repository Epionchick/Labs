#include <iostream>
#include <ctime>
#include <string>

using namespace std;
int main() {
	while (true){
		setlocale(0, "");
		srand(time(0));

		int choise;
		int pop = 5; //���-�� �������
		int y_num = 0;
		int start = 1; //��� ������, �������� ����
		int exit = 2; //��� ������, ��������� �������
		bool gameOver = false;
		int num = rand() % 10; //��������� ����� �� 0 �� 10

		cout << "\n [+] ���� - ��������\n\n [+] ����:\n\n [1] ������ ����\n [2] �����\n\n [>] ����: "; //����
		cin >> choise;

		if (choise == start) {
			system("cls");
			while (!gameOver) { //���� ���� �� ������ �������� ������, ���� ����� ������������
				cout << "\n [+] ��������� �����: [" << y_num << " / 3]\n\n [+] �������: [" << pop << "]\n\n [>] ������� �����: ";
				cin >> num;
				system("cls");
				if (num == rand() % 10) {
					cout << "\x1b[32m\n [+] �� ������� �����!\n\x1b[0m";
					pop = 5;

					y_num += 1;
					if (y_num == 3) {
						cout << "\n [+] �� ��������!\n"; //��������� � ������
						return 0;
					}
					continue;
				}
				else
					pop -= 1; //���������� ���-�� �������
					cout << "\x1b[91m\n [-] �� �� ������� �����!\n\x1b[0m";
					if (pop == 0) {
						cout << "\x1b[91m\n [!] �� ���������!\n\n\x1b[0m"; //��������� � ���������
						return 0;
					}
					continue;

				}
			}
		if (choise == exit) {
			return 0;
			system("exit"); //�����
			}
		if (choise == 0, choise > 2) {
			cout << "\x1b[91m\n [!] ������������ ����!\n\n\x1b[0m"; //�� ������ ������������� ����� � ����
			system("pause");
			system("cls");
			}
	}
	int _; cin >> _;
	return 0;
}