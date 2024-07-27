#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n == 1)
    return false;

  for (int i = 2; i <= int(sqrt(n)); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  int m;
  int total = 0;
  int min = 0;

  scanf("%d %d", &n, &m);
  for (int i = n; i <= m; i++) {
    if (isPrime(i)) {
      total += i;
      if (min == 0)
        min = i;
      else if (min > i)
        min = i;
    }
  }

  if (total == 0)
    cout << -1 << '\n';
  else
    cout << total << '\n' << min << '\n';

  return 0;
}