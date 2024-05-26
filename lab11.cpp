#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a1;
    cout << "Введите положительное число a1: ";
    cin >> a1;

    int max = pow(a1, 3);

    while(true) {
        int a;
        cout << "Введите элемент последовательности: ";
        cin >> a;
        if(a < 0) {
            break;
        }
        int cube = pow(a, 3);
        if(cube > max) {
            max = cube;
        }
    }

    cout << "max(a1^3, ..., an^3) = " << max;

    return 0;
}