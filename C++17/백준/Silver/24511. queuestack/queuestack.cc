#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  ll temp;

  int ds[100000];
  queue<ll> q;
  stack<ll> s;

  int n, m;
  bool only_stack = true;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    ds[i] = temp;
    if (!ds[i])
      only_stack = false;
  }

  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (ds[i] == 0) // queue
      s.push(temp);
  }
  // reverse queue

  while (!s.empty()) {
    q.push(s.top());
    s.pop();
  }

  cin >> m;

  while (m--) {
    cin >> temp;
    if (only_stack)
      cout << temp << " ";
    else {
      cout << q.front() << " ";
      q.pop();
      q.push(temp);
    }
  }

  return 0;
}
