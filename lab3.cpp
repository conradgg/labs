#include <iostream>

using namespace std;

int main() {
  double x, y, maximum;

  cout << "Введите значения x, y: ";
  cin >> x >> y;

  maximum = max(x, y);

  cout << "Максимумом между " << x << " и " << y << " будет " << maximum << endl;

  return 0;
}
