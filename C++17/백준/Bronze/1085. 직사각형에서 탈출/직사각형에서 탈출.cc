#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
  int x, y, w, h;
  vector<int> v;
  cin >> x >> y >> w >> h;

  v.push_back(x);
  v.push_back(y);
  v.push_back(abs(w - x));
  v.push_back(abs(y - h));

  sort(v.begin(), v.end());

  cout << v.front() << endl;

  return 0;
}