#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string &s) {
  stack<char> stack_s;
  for (char c : s) {
    if (c == '(' || c == '[')
      stack_s.push(c);
    else if (c == ')') {
      if (!stack_s.empty() && stack_s.top() == '(')
        stack_s.pop();
      else
        return false;
    } else if (c == ']') {
      if (!stack_s.empty() && stack_s.top() == '[')
        stack_s.pop();
      else
        return false;
    }
  }

  return stack_s.empty();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;

  while (getline(cin, s, '.') && s != "\n") {
    cout << (isBalanced(s) ? "yes" : "no") << '\n';
  }

  return 0;
}
