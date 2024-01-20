#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    while (true) {
        int lang;
        int word;
        cout << "\n [+] Переводчик\n\n [1] Русские слова\n [2] Английские слова\n [3] Выйти\n\n [>] Выбор: ";
        cin >> lang;
        system("cls");
        
        switch (lang) {
        case 1:
            cout << "\n [+] Переводчик “Список русских слов”\n\n [1] Дом\n [2] Дорога\n [3] Машина\n [4] Работа\n [5] Кино\n [6] Окно\n [7] Шкаф\n [8] Доска\n [9] Стол\n [10] Стул\n [11] Завтрак\n [12] Обед\n\n [+] Выберите номер слова: ";
            cin >> word;
            system("cls");
            switch (word) {
            case 1:
                cout << "\n [+] Дом --> House\n\n ";
                system("pause");
                system("cls");
                continue;
            case 2:
                cout << "\n [+] Дорога --> Road\n\n ";
                system("pause");
                system("cls");
                continue;
            case 3:
                cout << "\n [+] Машина --> Car\n\n ";
                system("pause");
                system("cls");
                continue;
            case 4:
                cout << "\n [+] Работа --> Work\n\n ";
                system("pause");
                system("cls");
                continue;
            case 5:
                cout << "\n [+] Кино --> Cinema\n\n ";
                system("pause");
                system("cls");
                continue;
            case 6:
                cout << "\n [+] Окно --> Window\n\n ";
                system("pause");
                system("cls");
                continue;
            case 7:
                cout << "\n [+] Шкаф --> Wardrobe\n\n ";
                system("pause");
                system("cls");
                continue;
            case 8:
                cout << "\n [+] Доска --> Board\n\n ";
                system("pause");
                system("cls");
                continue;
            case 9:
                cout << "\n [+] Стол --> Table\n\n ";
                system("pause");
                system("cls");
                continue;
            case 10:
                cout << "\n [+] Стул --> Chair\n\n ";
                system("pause");
                system("cls");
                continue;
            case 11:
                cout << "\n [+] Завтрак --> Breakfast\n\n ";
                system("pause");
                system("cls");
                continue;
            case 12:
                cout << "\n [+] Обед --> Dinner\n\n ";
                system("pause");
                system("cls");
                continue;
            default:
                cout << "\n [!] Слово отсутсвует в списке!\n\n ";
                system("pause");
                system("cls");
                continue;
            }
        case 2:
            cout << "\n [+] Переводчик “Список английских слов”\n\n [1] House\n [2] Road\n [3] Car\n [4] Work\n [5] Cinema\n [6] Window\n [7] Wardrobe\n [8] Boart\n [9] Table\n [10] Chair\n [11] Breakfast\n [12] Dinner\n\n [+] Выберите номер слова: ";
            cin >> word;
            system("cls");
            switch (word) {
            case 1:
                cout << "\n [+] House --> Дом\n\n ";
                system("pause");
                system("cls");
                continue;
            case 2:
                cout << "\n [+] Road --> Дорога\n\n ";
                system("pause");
                system("cls");
                continue;
            case 3:
                cout << "\n [+] Car --> Машина\n\n ";
                system("pause");
                system("cls");
                continue;
            case 4:
                cout << "\n [+] Work --> Работа\n\n ";
                system("pause");
                system("cls");
                continue;
            case 5:
                cout << "\n [+] Cinema --> Кино\n\n ";
                system("pause");
                system("cls");
                continue;
            case 6:
                cout << "\n [+] Window --> Окно\n\n ";
                system("pause");
                system("cls");
                continue;
            case 7:
                cout << "\n [+] Wardrobe --> Шкаф\n\n ";
                system("pause");
                system("cls");
                continue;
            case 8:
                cout << "\n [+] Board --> Доска\n\n ";
                system("pause");
                system("cls");
                continue;
            case 9:
                cout << "\n [+] Table --> Стол\n\n ";
                system("pause");
                system("cls");
                continue;
            case 10:
                cout << "\n [+] Chair --> Стул\n\n ";
                system("pause");
                system("cls");
                continue;
            case 11:
                cout << "\n [+] Breakfast --> Завтрак\n\n ";
                system("pause");
                system("cls");
                continue;
            case 12:
                cout << "\n [+] Dinner --> Обед\n\n ";
                system("pause");
                system("cls");
                continue;
            default:
                cout << "\n [!] Слово отсутсвует в спсиске!\n\n ";
                system("pause");
                system("cls");
                continue;
            }
        case 3:
            cout << "\n [+] Выход\n";
            return 0;
        default:
                cout << "\n [!] Язык отсутсвует в списке!\n";
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