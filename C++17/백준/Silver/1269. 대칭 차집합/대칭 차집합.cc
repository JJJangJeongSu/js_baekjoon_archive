#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int temp;
  set<int> s_a;
  set<int> s_b;
  set<int> s_inter;
  set<int> s_union;
  set<int> s_result;

  int n, m;

  cin >> n >> m;

  while (n--) {
    cin >> temp;
    s_a.insert(temp);
  }

  while (m--) {
    cin >> temp;
    s_b.insert(temp);
  }

  set_intersection(s_a.begin(), s_a.end(), s_b.begin(), s_b.end(),
                   inserter(s_inter, s_inter.begin()));

  set_union(s_a.begin(), s_a.end(), s_b.begin(), s_b.end(),
            inserter(s_union, s_union.begin()));

  set_difference(s_union.begin(), s_union.end(), s_inter.begin(), s_inter.end(),
                 inserter(s_result, s_result.begin()));

  cout << s_result.size() << '\n';

  return 0;
}
