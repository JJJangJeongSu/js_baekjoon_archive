#include <iostream>
using namespace std;

int main() {
  int arr[10000] = {0};

  int n;
  int temp;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    arr[temp - 1]++;
  }

  for (int i = 0; i < 10000; i++) {
    for (int j = 0; j < arr[i]; j++)
      cout << i + 1 << '\n';
  }

  return 0;
}