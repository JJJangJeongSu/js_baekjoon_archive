#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  string temp_s;
  set<string> string_s;

  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    for (int j = 1; i + j <= s.length(); j++) {
      temp_s = s.substr(i, j);
      string_s.insert(temp_s);
    }
  }

  cout << string_s.size() << '\n';

  return 0;
}
