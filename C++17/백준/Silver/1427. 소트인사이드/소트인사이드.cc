#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  ll n;
  ll result = 0;
  ll t = 1;
  vector<ll> v;

  while (scanf("%1d", &n) != EOF)
    v.push_back(n);

  sort(v.begin(), v.end());

  for (auto i : v) {
    result += t * i;
    t *= 10;
  }

  cout << result << '\n';

  return 0;
}