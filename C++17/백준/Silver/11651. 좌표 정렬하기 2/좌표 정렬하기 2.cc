#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Dot {
public:
  int x;
  int y;

  bool operator<(const Dot &d2) {
    if (this->y == d2.y)
      return this->x < d2.x;
    else
      return this->y < d2.y;
  }

  void printCordinate() { cout << this->x << " " << this->y << '\n'; }
};

int main() {
  int n;
  vector<Dot> v;
  scanf("%d", &n);

  while (n--) {
    Dot d;
    scanf("%d %d", &d.x, &d.y);

    v.push_back(d);
  }

  sort(v.begin(), v.end());

  for (auto i : v) {
    i.printCordinate();
  }
  return 0;
}