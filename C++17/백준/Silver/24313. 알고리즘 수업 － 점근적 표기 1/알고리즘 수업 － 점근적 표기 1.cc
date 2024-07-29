#include <iostream>

using namespace std;

int main() {
  int a_1, a_0;
  int c, n_0;
  bool isBigO = true;

  cin >> a_1 >> a_0;
  cin >> c;
  cin >> n_0;

  for (int i = n_0; i <= 100; i++) {
    if (a_1 * i + a_0 > c * i) {
      isBigO = false;
      break;
    }
  }

  cout << isBigO ? 1 : 0;

  return 0;
}