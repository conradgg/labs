#include <iostream>

using namespace std;

int main() {
  unsigned int n, i;
  unsigned long long res = 1;

  cout << "Введите натуральное число: ";
  cin >> n;

  for (i = 2; i <= n; i++)
    res *= i;

  cout << n << "! = " << res << endl;

  return 0;
}
