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
  int temp;
  int count = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    if (isPrime(temp))
      count++;
  }

  cout << count;
  return 0;
}