#include <iostream>
using namespace std;

typedef long long ll;

ll piv(ll n) {
  if (n == 0)
    return 1;
  else
    return n * piv(n - 1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;

  cin >> n;

  cout << piv(n) << '\n';

  return 0;
}
