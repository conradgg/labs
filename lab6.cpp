#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, result, currentValue;
  unsigned int n, i;

  cout << "Введите значение x: ";
  cin >> x;
  cout << "Введите количество синусов (n): ";
  cin >> n;

  currentValue = sin(x);
  for (i = 0; i < n; i++) {
    result += currentValue;
    currentValue = sin(currentValue);
  }

  cout << "Сумма = " << result << endl;

  return 0;
}
