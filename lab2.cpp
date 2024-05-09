#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, y, z, a, b;

  cout << "Введите значения x, y, z: ";
  cin >> x >> y >> z;

  a = (sqrt(abs(x - 1)) - cbrt(abs(y))) / (1 + pow(x, 2) / 2 + pow(y, 2) / 4);
  b = x * (atan(z) + exp(-(x + 3)));

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}
