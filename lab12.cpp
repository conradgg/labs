#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double result = 0;

    for(int k = 1; k <= 10; k++) {
        double innerSum = 0;
        for(int l = 1; l <= 15; l++) {
            innerSum += pow(k - l, 2);
        }
        result += k * k * k * innerSum;
    }

    cout << "Результат: " << result << endl;

    return 0;
}