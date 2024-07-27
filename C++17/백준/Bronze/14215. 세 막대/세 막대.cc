#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int x, y, z;
  int total = 0;
  int max_length;

  scanf("%d %d %d", &x, &y, &z);

  max_length = max({x, y, z});

  total = x + y + z;

  if (max_length >= total - max_length)
    total = 2 * (total - max_length) - 1;

  cout << total << '\n';

  return 0;
}