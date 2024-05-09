#include <iostream>
#include <cmath>

using namespace std;

int main() {
  unsigned int n, i;
  double A, res;

  cout << "Введите натуральное число: ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    double a;
    cout << "Введите a" << i << ": ";
    cin >> a;
    if (i == 1)
      A = a;
    else
      A *= a;
  }

  res = sqrt(abs(A));

  cout << "Сумма = " << res << endl;

  return 0;
}
