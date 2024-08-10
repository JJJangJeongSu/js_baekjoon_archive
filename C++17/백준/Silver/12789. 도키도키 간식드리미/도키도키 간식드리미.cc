#include <iostream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string result;
  queue<int> q;
  stack<int> s;
  map<int, bool> m;

  int temp;
  int n;
  int cur = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    q.push(temp);
  }

  result = "Nice";

  while (cur <= n) {
    if (!q.empty() && q.front() == cur) {
      q.pop();
      cur++;
    } else if (!s.empty() && s.top() == cur) {
      s.pop();
      cur++;
    } else if (m[cur]) {
      result = "Sad";
      break;
    } else {
      temp = q.front();
      q.pop();
      s.push(temp);
      m[temp] = true;
    }
  }

  cout << result << '\n';

  return 0;
}
