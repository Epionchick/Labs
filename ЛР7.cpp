#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        int month = 0;
        int day;
        cout << "\n [+] �������� �����:\n\n [1] ������\n [2] �������\n [3] ����\n [4] ������\n [5] ���\n [6] ����\n [7] ����\n [8] ������\n [9] ��������\n [10] �������\n [11] ������\n [12] �������\n\n [+] �����: ";
        cin >> month;
        system("cls");

        switch (month) {
        case 1:
            cout << "\n [+] ������ ����� ������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 2:
            cout << "\n [+] ������ ����� �������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 30) {
                system("cls");
                cout << "\n [+] ���������: " << day << " �������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 3:
            cout << "\n [+] ������ ����� ����\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " �����" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 4:
            cout << "\n [+] ������ ����� ������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 5:
            cout << "\n [+] ������ ����� ���\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ���" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 6:
            cout << "\n [+] ������ ����� ����\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ����" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 7:
            cout << "\n [+] ������ ����� ����\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ����" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 8:
            cout << "\n [+] ������ ����� ������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " �������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 9:
            cout << "\n [+] ������ ����� ��������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ��������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 10:
            cout << "\n [+] ������ ����� �������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " �������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 11:
            cout << "\n [+] ������ ����� ������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] ���������: " << day << " ������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 12:
            cout << "\n [+] ������ ����� �������\n";
            cout << "\n [+] �������� ���� ������: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] ���������: " << day << " �������" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] ������������ ���������� ����!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        default:
            cout << "\n\x1b[91m [-] ����������� ������ ����� ������!\n\x1b[0m";
            cout << "\n ";
            system("pause");
            system("cls");
            break;
        }
    }

    int _; cin >> _;
    return 0;
}