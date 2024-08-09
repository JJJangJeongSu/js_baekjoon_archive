#include <iostream>
#include <map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  map<int, int> n_map;
  cin.tie(NULL);
  int n, m;
  int temp;
  map<int, int>::iterator result;
  cin >> n;

  while (n--) {
    cin >> temp;
    n_map[temp]++;
  }

  cin >> m;
  while (m--) {
    cin >> temp;

    cout << ((result = n_map.find(temp)) != n_map.end() ? result->second : 0)
         << " ";
  }

  return 0;
}