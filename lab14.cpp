#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cout << "Введите действительное число x: ";
    cin >> x;

    double matrix[10][10];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(i == 0 && j >= 0 && j <= 9) {
                matrix[i][j] = pow(x, j);
            } else if(i == 9 && j >= 0 && j <= 9) {
                matrix[i][j] = pow(x, 9-j);
            } else if(i > 0 && i < 9 && j > 0 && j < 9) {
                matrix[i][j] = 0;
            } else if(j == 0) {
                matrix[i][j] = pow(x, i);
            } else {
                matrix[i][j] = pow(x, 9-i);
            }
        }
    }

    cout << "Результирующая матрица:\n";
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
