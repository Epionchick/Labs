#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        int month;
        cout << "\n [>] ������� ����� ������ (�� 1 �� 12): ";
        cin >> month;

        switch (month) {
        case 1:
            cout << "\n [+] ������ ����� ������\n";
            break;
        case 2:
            cout << "\n [+] ������ ����� �������\n";
            break;
        case 3:
            cout << "\n [+] ������ ����� ����\n";
            break;
        case 4:
            cout << "\n [+] ������ ����� ������\n";
            break;
        case 5:
            cout << "\n [+] ������ ����� ���\n";
            break;
        case 6:
            cout << "\n [+] ������ ����� ����\n";
            break;
        case 7:
            cout << "\n [+] ������ ����� ����\n";
            break;
        case 8:
            cout << "\n [+] ������ ����� ������\n";
            break;
        case 9:
            cout << "\n [+] ������ ����� ��������\n";
            break;
        case 10:
            cout << "\n [+] ������ ����� �������\n";
            break;
        case 11:
            cout << "\n [+] ������ ����� ������\n";
            break;
        case 12:
            cout << "\n [+] ������ ����� �������\n";
            break;
        default:
            cout << "\n\x1b[91m [!] ����������� ������ ����� ������!\x1b[0m\n";
    }
}
    system("pause");
    system("cls");
    int _; cin >> _;
    return 0;
}