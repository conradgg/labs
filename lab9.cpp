#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int array[50];

    for (int i = 0; i < 50; i++) {
        int a;
        cout << "Введите число " << i + 1 << ": ";
        cin >> a;
        array[i] = a;
    }

    for(int i = 0; i < 50; i++) {
        if(array[i] % 5 == 0) {
            sum += array[i];
        }
    }

    cout << "Сумма чисел последовательности, кратных 5: " << sum;

    return 0;
}