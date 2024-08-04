#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool compString(string a, string b) {
  if (a.length() != b.length())
    return a.length() < b.length();

  return a < b;
}

int main() {
  int n;
  string temp = "";
  vector<string> v;
  scanf("%d", &n);

  while (n--) {
    string s;
    cin >> s;

    v.push_back(s);
  }

  sort(v.begin(), v.end(), compString);

  for (auto i : v) {
    if (temp != i) {
      cout << i << '\n';
      temp = i;
    }
  }

  return 0;
}