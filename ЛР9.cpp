#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int num = 1;

    while (num != 0) {
        cout << "\n [+] ������� �����: ";
        cin >> num;
        system("cls");
        cout << "\n [+] ���� WHILE" << endl;
        for (int i = 1; i <= num; i++)
        {
            cout << "\n [+] ���� ���������. ����: " << i << endl;
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