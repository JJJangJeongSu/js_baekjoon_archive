#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 0;
  int count = 0;
  cin >> n;

  while ((n - 3 * i) % 5 != 0) {
    i++;
    if (n < 3 * i) {
      count = -1;
      break;
    }
  }

  cout << (count == -1 ? -1 : i + (n - 3 * i) / 5);

  return 0;
}