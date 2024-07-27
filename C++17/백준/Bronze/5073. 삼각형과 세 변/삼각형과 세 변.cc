#include <iostream>
using namespace std;

int main() {
  int x, y, z;

  while (scanf("%d%d%d", &x, &y, &z) && (x * y * z != 0)) {
    if ((x >= y + z) || (y >= x + z) || (z >= x + y))
      cout << "Invalid" << '\n';
    else if (x == y && x == z)
      cout << "Equilateral" << '\n';
    else if (x == y || x == z || y == z)
      cout << "Isosceles" << '\n';
    else
      cout << "Scalene" << '\n';
  }

  return 0;
}