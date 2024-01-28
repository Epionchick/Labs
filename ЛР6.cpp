#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        int month;
        cout << "\n [>] Введите номер месяца (от 1 до 12): ";
        cin >> month;

        switch (month) {
        case 1:
            cout << "\n [+] Выбран месяц Январь\n";
            break;
        case 2:
            cout << "\n [+] Выбран месяц Февраль\n";
            break;
        case 3:
            cout << "\n [+] Выбран месяц Март\n";
            break;
        case 4:
            cout << "\n [+] Выбран месяц Апрель\n";
            break;
        case 5:
            cout << "\n [+] Выбран месяц Май\n";
            break;
        case 6:
            cout << "\n [+] Выбран месяц Июнь\n";
            break;
        case 7:
            cout << "\n [+] Выбран месяц Июль\n";
            break;
        case 8:
            cout << "\n [+] Выбран месяц Август\n";
            break;
        case 9:
            cout << "\n [+] Выбран месяц Сентябрь\n";
            break;
        case 10:
            cout << "\n [+] Выбран месяц Октябрь\n";
            break;
        case 11:
            cout << "\n [+] Выбран месяц Ноябрь\n";
            break;
        case 12:
            cout << "\n [+] Выбран месяц Декабрь\n";
            break;
        default:
            cout << "\n\x1b[91m [!] Неправильно введен номер месяца!\x1b[0m\n";
    }
}
    system("pause");
    system("cls");
    int _; cin >> _;
    return 0;
}
