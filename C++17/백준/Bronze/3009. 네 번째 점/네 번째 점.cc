#include <iostream>
#include <stack>

using namespace std;

int main() {
  int x[1001] = {0};
  int y[1001] = {0};
  int result_x, result_y;

  int a, b;

  int n = 3;
  while (n--) {
    cin >> a >> b;
    x[a]++;
    y[b]++;
  }

  for (int i = 1; i <= 1000; i++) {
    if (x[i] == 1)
      result_x = i;
    if (y[i] == 1)
      result_y = i;
  }

  cout << result_x << " " << result_y << '\n';

  return 0;
}