#include <iostream>
#include <math.h>
using namespace std;

int cal_binomial(int n, int k) {
  int result = 1;
  for (int i = 0; i < k; i++) {
    result *= (n - i);
  }

  for (int i = 0; i < k; i++) {
    result /= (i + 1);
  }

  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;

  cin >> n >> k;

  cout << cal_binomial(n, k) << '\n';

  return 0;
}
