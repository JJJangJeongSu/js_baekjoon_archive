#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

using namespace std;
int n, m;

int calBoard(int a, int b, char arr[][50]) {
  int count = 0;
  int count_1 = 0, count_2 = 0;

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if ((i + j) % 2 == 0) {
        if (arr[i + a][j + b] != 'W')
          count_1++;
        if (arr[i + a][j + b] != 'B')
          count_2++;
      } else {
        if (arr[i + a][j + b] != 'B')
          count_1++;
        if (arr[i + a][j + b] != 'W')
          count_2++;
      }
    }
  }

  return min(count_1, count_2);
}

int main() {
  int n, m;
  int min = INT_MAX;
  int result;
  char arr[50][50];

  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i <= n - 8; i++) {
    for (int j = 0; j <= m - 8; j++) {
      result = calBoard(i, j, arr);
      min = result < min ? result : min;
    }
  }

  cout << min;

  return 0;
}