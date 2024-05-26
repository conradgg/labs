#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    double numbers[n];

    for(int i = 0; i < n; i++) {
        cout << "Введите действительное число a" << i + 1 << ": ";
        cin >> numbers[i];
    }

    double min = INT_MAX;
    double max = INT_MIN;

    for(int i = 1; i < n; i += 2) {
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }

    for(int i = 0; i < n; i += 2) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "min(a2, a4, ...) + max(a1, a3, ...): " << min + max;

    return 0;
}