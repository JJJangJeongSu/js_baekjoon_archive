#include <iostream>
using namespace std;

int main() {
  int x, y, z;

  scanf("%d%d%d", &x, &y, &z);

  if ((x + y + z) != 180) {
    cout << "Error" << '\n';
  } else if (x == y || x == z || y == z) {
    if (x == 60)
      cout << "Equilateral" << '\n';
    else
      cout << "Isosceles" << '\n';
  } else
    cout << "Scalene" << '\n';
  return 0;
}