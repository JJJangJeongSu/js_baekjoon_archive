#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[1000];

  int n, k;
  int count;
  int cur = 0;
  cin >> n >> k;

  for (int i = 0; i < n; i++)
    arr[i] = i + 1;
  cout << "<";
  for (int total_count = 0; total_count < n; total_count++) {
    count = 0;
    while (count < k - 1 || arr[cur] == 0) {
      if (arr[cur])
        count++;
      cur = (cur + 1) % n;
    }
    cout << arr[cur];
    cout << (total_count == n - 1 ? ">" : ", ");
    arr[cur] = 0;
  }

  cout << '\n';

  return 0;
}
