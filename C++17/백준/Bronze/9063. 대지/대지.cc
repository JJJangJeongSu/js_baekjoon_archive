#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int x, y;
  int min_x, min_y;
  int max_x, max_y;
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    if (i == 0) {
      max_x = x;
      max_y = y;
      min_x = x;
      min_y = y;
    }
    max_x = max(max_x, x);
    max_y = max(max_y, y);
    min_x = min(min_x, x);
    min_y = min(min_y, y);
  }

  cout << (max_x - min_x) * (max_y - min_y) << '\n';

  return 0;
}