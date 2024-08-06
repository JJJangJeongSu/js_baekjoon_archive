#include <iostream>
#include <map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  map<string, bool> member_map;
  string name;
  string action;

  cin >> n;

  while (n--) {
    cin >> name >> action;

    if (action[0] == 'e')
      member_map[name] = true;
    else
      member_map.erase(name);
  }

  for (auto it = member_map.rbegin(); it != member_map.rend(); it++)
    cout << it->first << "\n";

  return 0;
}