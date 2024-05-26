#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите размерность матрицы n (n >= 6): ";
    cin >> n;

    double matrix[n][n];
    double a[n];
    double result[n][n+1];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Введите элемент матрицы " << i + 1 << " " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << "Введите действительное число a" << i + 1 << ": ";
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            result[i][j] = matrix[i][j];
        }
        for(int j = 5; j < n; j++) {
            result[i][j+1] = matrix[i][j];
        }
        result[i][5] = a[i];
    }

    cout << "Результирующая матрица:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n+1; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}