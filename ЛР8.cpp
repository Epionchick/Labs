#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    while (true) {
        int lang;
        int word;
        cout << "\n [+] ����������\n\n [1] ������� �����\n [2] ���������� �����\n [3] �����\n\n [>] �����: ";
        cin >> lang;
        system("cls");
        
        switch (lang) {
        case 1:
            cout << "\n [+] ���������� ������� ������� ����\n\n [1] ���\n [2] ������\n [3] ������\n [4] ������\n [5] ����\n [6] ����\n [7] ����\n [8] �����\n [9] ����\n [10] ����\n [11] �������\n [12] ����\n\n [+] �������� ����� �����: ";
            cin >> word;
            system("cls");
            switch (word) {
            case 1:
                cout << "\n [+] ��� --> House\n\n ";
                system("pause");
                system("cls");
                continue;
            case 2:
                cout << "\n [+] ������ --> Road\n\n ";
                system("pause");
                system("cls");
                continue;
            case 3:
                cout << "\n [+] ������ --> Car\n\n ";
                system("pause");
                system("cls");
                continue;
            case 4:
                cout << "\n [+] ������ --> Work\n\n ";
                system("pause");
                system("cls");
                continue;
            case 5:
                cout << "\n [+] ���� --> Cinema\n\n ";
                system("pause");
                system("cls");
                continue;
            case 6:
                cout << "\n [+] ���� --> Window\n\n ";
                system("pause");
                system("cls");
                continue;
            case 7:
                cout << "\n [+] ���� --> Wardrobe\n\n ";
                system("pause");
                system("cls");
                continue;
            case 8:
                cout << "\n [+] ����� --> Board\n\n ";
                system("pause");
                system("cls");
                continue;
            case 9:
                cout << "\n [+] ���� --> Table\n\n ";
                system("pause");
                system("cls");
                continue;
            case 10:
                cout << "\n [+] ���� --> Chair\n\n ";
                system("pause");
                system("cls");
                continue;
            case 11:
                cout << "\n [+] ������� --> Breakfast\n\n ";
                system("pause");
                system("cls");
                continue;
            case 12:
                cout << "\n [+] ���� --> Dinner\n\n ";
                system("pause");
                system("cls");
                continue;
            default:
                cout << "\n [!] ����� ���������� � ������!\n\n ";
                system("pause");
                system("cls");
                continue;
            }
        case 2:
            cout << "\n [+] ���������� ������� ���������� ����\n\n [1] House\n [2] Road\n [3] Car\n [4] Work\n [5] Cinema\n [6] Window\n [7] Wardrobe\n [8] Boart\n [9] Table\n [10] Chair\n [11] Breakfast\n [12] Dinner\n\n [+] �������� ����� �����: ";
            cin >> word;
            system("cls");
            switch (word) {
            case 1:
                cout << "\n [+] House --> ���\n\n ";
                system("pause");
                system("cls");
                continue;
            case 2:
                cout << "\n [+] Road --> ������\n\n ";
                system("pause");
                system("cls");
                continue;
            case 3:
                cout << "\n [+] Car --> ������\n\n ";
                system("pause");
                system("cls");
                continue;
            case 4:
                cout << "\n [+] Work --> ������\n\n ";
                system("pause");
                system("cls");
                continue;
            case 5:
                cout << "\n [+] Cinema --> ����\n\n ";
                system("pause");
                system("cls");
                continue;
            case 6:
                cout << "\n [+] Window --> ����\n\n ";
                system("pause");
                system("cls");
                continue;
            case 7:
                cout << "\n [+] Wardrobe --> ����\n\n ";
                system("pause");
                system("cls");
                continue;
            case 8:
                cout << "\n [+] Board --> �����\n\n ";
                system("pause");
                system("cls");
                continue;
            case 9:
                cout << "\n [+] Table --> ����\n\n ";
                system("pause");
                system("cls");
                continue;
            case 10:
                cout << "\n [+] Chair --> ����\n\n ";
                system("pause");
                system("cls");
                continue;
            case 11:
                cout << "\n [+] Breakfast --> �������\n\n ";
                system("pause");
                system("cls");
                continue;
            case 12:
                cout << "\n [+] Dinner --> ����\n\n ";
                system("pause");
                system("cls");
                continue;
            default:
                cout << "\n [!] ����� ���������� � �������!\n\n ";
                system("pause");
                system("cls");
                continue;
            }
        case 3:
            cout << "\n [+] �����\n";
            return 0;
        default:
                cout << "\n [!] ���� ���������� � ������!\n";
                system("pause");
                system("cls");
                continue;
        }

        system("pause");
        system("cls");
        int _; cin >> _;
        return 0;
    }
}