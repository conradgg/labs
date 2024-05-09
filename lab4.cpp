#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double h, a, b, c, D, x1, x2;

  cout << "Введите значение h: ";
  cin >> h;

  a = sqrt((abs(sin(8 * h)) + 17) / pow((1 - sin(4 * h) * cos(pow(h, 2) + 18)), 2));
  b = 1 - sqrt(3 / (3 + abs(tan(a * pow(h, 2)) - sin(a * h))));
  c = a * pow(h, 2) * sin(b * h) + b * pow(h, 3) * cos(a * h);

  if (a == 0) {
    if (b == 0) {
      cout << "Уравнение не имеет решений" << endl;
    } else {
      cout << "Уравнение имеет один корень: x = " << -c / b << endl;
    }
  } else {
    D = b * b - 4 * a * c;

    if (D < 0) {
      cout << "Уравнение не имеет действительных корней" << endl;
    } else {
      x1 = (-b + sqrt(D)) / (2 * a);
      x2 = (-b - sqrt(D)) / (2 * a);
      cout << "x1 = " << x1 << endl;
      cout << "x2 = " << x2 << endl;
    }
  }

  return 0;
}