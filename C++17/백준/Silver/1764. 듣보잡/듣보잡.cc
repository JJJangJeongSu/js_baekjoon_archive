#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string temp;
  set<string> s_first;
  set<string> s_result;

  int n, m;
  int count = 0;

  cin >> n >> m;
  while (n--) {
    cin >> temp;
    s_first.insert(temp);
  }

  while (m--) {
    cin >> temp;
    if (s_first.find(temp) != s_first.end())
      s_result.insert(temp);
  }

  cout << s_result.size() << '\n';

  for (auto it : s_result)
    cout << it << '\n';

  return 0;
}