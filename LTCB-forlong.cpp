#include <iostream>
using namespace std;
int main()
{
    int so; cout << "Nhap so:"; cin >> so;
    for (int i = 0; i < so; i ++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";

        }
        cout << endl;
    }
    return 0;
}

