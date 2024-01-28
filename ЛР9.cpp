#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int num = 1;

    while (num != 0) {
        cout << "\n [+] Введите число: ";
        cin >> num;
        system("cls");
        cout << "\n [+] Цикл WHILE" << endl;
        for (int i = 1; i <= num; i++)
        {
            cout << "\n [+] Цикл отработал. Круг: " << i << endl;
        }
        cout << "\n ";
        system("pause");
        system("cls");
        continue;
    }
    if (num == 0) {
        return 0;
    }

    int _; cin >> _;
    return 0;
}
