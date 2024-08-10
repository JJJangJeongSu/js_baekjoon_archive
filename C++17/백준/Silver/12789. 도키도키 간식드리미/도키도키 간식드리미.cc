#include <iostream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  queue<int> q;
  stack<int> s;

  int temp;
  int n;
  int cur = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    q.push(temp);
  }

  while (!s.empty() || !q.empty()) {
    if (!q.empty() && q.front() == cur) {
      q.pop();
      cur++;
    } else if (!s.empty() && s.top() == cur) {
      s.pop();
      cur++;
    } else if (!q.empty()) {
      s.push(q.front());
      q.pop();
    } else {
      break;
    }
  }

  cout << (cur == n + 1 ? "Nice" : "Sad") << '\n';

  return 0;
}
