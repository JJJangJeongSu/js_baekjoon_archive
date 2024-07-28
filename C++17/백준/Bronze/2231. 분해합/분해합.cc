#include <iostream>
#include <unistd.h>
using namespace std;

int getDivSum(int n) {
  int total = 0;
  total += n;
  while (n) {
    total += (n % 10);
    n /= 10;
  }

  return total;
}

int main() {
  int n;
  int result;
  int temp = 1;
  bool not_found = false;
  scanf("%d", &n);

  do {
    if (temp >= n) {
      not_found = true;
      break;
    }
    result = getDivSum(temp++);
  } while (result != n);

  if (not_found)
    cout << 0 << '\n';
  else
    cout << temp - 1 << '\n';

  return 0;
}
