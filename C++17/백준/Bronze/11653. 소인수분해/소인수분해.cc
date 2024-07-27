#include <iostream>

using namespace std;

int main() {
  int n;
  int temp = 2;

  cin >> n;

  while (n != 1) {
    if (n % temp == 0) {
      cout << temp << '\n';
      n /= temp;
    } else
      temp++;
  }
  return 0;
}