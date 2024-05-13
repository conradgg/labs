#include <iostream>

using namespace std;

int main() {
    double array[20];

    array[0] = 1;
    array[1] = 0.3;

    cout << "x1 = " << array[0] << endl;
    cout << "x2 = " << array[1] << endl;

    for(int i = 3; i <= 20; i++) {
        array[i - 1] = (i + 1) * array[i - 3];
        cout << "x" << i << " = " << array[i - 1] << endl;
    }

    return 0;
}