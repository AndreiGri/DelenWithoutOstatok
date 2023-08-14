#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int n, k = 1;
    cout << "Введите опорное число: ";
    cin >> n;
start: //Метка
    if (n % k == 0) {
        cout << k << " ";
    }
    if (k <= n) {
        k++;
        goto start;
    }
    system("pause > nul");
    return 0;
}
