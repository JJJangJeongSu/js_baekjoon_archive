#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  unordered_set<string> s_set;

  int n, m;
  int count = 0;
  string s;

  cin >> n >> m;

  while (n--) {
    cin >> s;
    s_set.insert(s);
  }

  while (m--) {
    cin >> s;
    if (s_set.find(s) != s_set.end())
      count++;
  }

  cout << count << '\n';

  return 0;
}