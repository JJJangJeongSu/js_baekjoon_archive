#include <iostream>
#include <string.h>
using namespace std;

int count = 0;

int recursion(const string &s, int l, int r) {
  count++;
  if (l >= r)
    return 1;
  else if (s[l] != s[r])
    return 0;
  else
    return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string &s) { return recursion(s, 0, s.length() - 1); }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  string s;
  bool is_palin;

  cin >> n;

  while (n--) {
    cin >> s;
    count = 0;
    is_palin = isPalindrome(s);

    cout << (is_palin ? 1 : 0) << " " << count << '\n';
  }

  return 0;
}
