#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, temp;
  vector<int> v;
  cin >> n;

  while (n--) {
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  for (auto i : v)
    cout << i << '\n';

  return 0;
}