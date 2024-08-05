#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> initial_v(n);
  vector<int> sorted_v;
  map<int, int> compress_map;

  for (int i = 0; i < n; i++)
    cin >> initial_v[i];

  sorted_v = initial_v;
  sort(sorted_v.begin(), sorted_v.end());

  int j = 0;
  for (int i = 0; i < sorted_v.size(); i++) {
    if (compress_map.find(sorted_v[i]) == compress_map.end()) {
      compress_map[sorted_v[i]] = j++;
    }
  }

  for (int i = 0; i < n; i++)
    cout << compress_map[initial_v[i]] << " ";

  return 0;
}
