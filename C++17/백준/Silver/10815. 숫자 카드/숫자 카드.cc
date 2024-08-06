#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool bin_search(const vector<int> &v, int n) {
  int l = 0;
  int r = v.size();
  int mid;

  while (l < r) {
    mid = (l + r) / 2;
    if (v[mid] == n)
      return true;
    else if (n < v[mid]) {
      r = mid;
    } else
      l = mid + 1;
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  int temp;
  vector<int> v;
  cin >> n;
  while (n--) {
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());

  cin >> m;
  while (m--) {
    cin >> temp;
    cout << (bin_search(v, temp) ? 1 : 0) << " "; // 찾으면 1, 아니면 0 출력
  }

  return 0;
}
