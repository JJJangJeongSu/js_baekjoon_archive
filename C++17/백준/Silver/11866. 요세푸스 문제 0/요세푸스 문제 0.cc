#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  queue<int> q;

  int n, k;
  int count;
  int temp;

  cin >> n >> k;
  for (int i = 0; i < n; i++)
    q.push(i + 1);

  cout << "<";
  while (!q.empty()) {
    count = 0;

    for (int i = 0; i < k - 1; i++) {
      temp = q.front();
      q.pop();
      q.push(temp);
    }
    cout << q.front();
    q.pop();
    cout << (q.empty() ? ">" : ", ");
  }

  return 0;
}
