#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        int month = 0;
        int day;
        cout << "\n [+] Выберите месяц:\n\n [1] Январь\n [2] Февраль\n [3] Март\n [4] Апрель\n [5] Май\n [6] Июнь\n [7] Июль\n [8] Август\n [9] Сентябрь\n [10] Октябрь\n [11] Ноябрь\n [12] Декабрь\n\n [+] Выбор: ";
        cin >> month;
        system("cls");

        switch (month) {
        case 1:
            cout << "\n [+] Выбран месяц Январь\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Января" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 2:
            cout << "\n [+] Выбран месяц Февраль\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 30) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Февраля" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 3:
            cout << "\n [+] Выбран месяц Март\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Марта" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 4:
            cout << "\n [+] Выбран месяц Апрель\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Апреля" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 5:
            cout << "\n [+] Выбран месяц Май\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Мая" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 6:
            cout << "\n [+] Выбран месяц Июнь\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Июня" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 7:
            cout << "\n [+] Выбран месяц Июль\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Июля" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 8:
            cout << "\n [+] Выбран месяц Август\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Августа" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 9:
            cout << "\n [+] Выбран месяц Сентябрь\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Сентября" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 10:
            cout << "\n [+] Выбран месяц Октябрь\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Октября" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 11:
            cout << "\n [+] Выбран месяц Ноябрь\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 31) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Ноября" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        case 12:
            cout << "\n [+] Выбран месяц Декабрь\n";
            cout << "\n [+] Выберите день месяца: ";
            cin >> day;
            if (day < 32) {
                system("cls");
                cout << "\n [+] Календарь: " << day << " Декабря" << endl;
                cout << "\n ";
                system("pause");
                system("cls");
                break;
            }
            else
                system("cls");
                cout << "\n\x1b[91m [!] Недопустимое количество дней!\x1b[0m\n";
                cout << "\n ";
                system("pause");
                system("cls");
                break;
        default:
            cout << "\n\x1b[91m [-] Неправильно введен номер месяца!\n\x1b[0m";
            cout << "\n ";
            system("pause");
            system("cls");
            break;
        }
    }

    int _; cin >> _;
    return 0;
}
