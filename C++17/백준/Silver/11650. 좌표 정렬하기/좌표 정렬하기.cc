#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Dot {
public:
  int x;
  int y;

  bool operator<(Dot &dot) {
    if (this->x == dot.x)
      return this->y < dot.y;
    else
      return this->x < dot.x;
  }

  friend std::ostream &operator<<(std::ostream &out, const Dot &dot) {
    out << dot.x << " " << dot.y;
    return out;
  }
};

int main() {
  int n;

  vector<Dot> vec;

  cin >> n;

  while (n--) {
    Dot dot;
    cin >> dot.x >> dot.y;
    vec.push_back(dot);
  }

  sort(vec.begin(), vec.end());

  for (auto i : vec) {
    cout << i << '\n';
  }
  return 0;
}