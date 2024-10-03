#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int p, int q, int r) {
  vector<int> v_l;
  vector<int> v_r;

  for (int i = p; i <= q; i++) {
    v_l.push_back(arr[i]);
  }
  for (int i = q + 1; i <= r; i++) {
    v_r.push_back(arr[i]);
  }

  int i = 0;
  int j = 0;
  int k = p;

  while (i != q - p + 1 && j != r - q) {
    if (v_l[i] <= v_r[j]) {
      arr[k++] = v_l[i++];
    } else {
      arr[k++] = v_r[j++];
    }
  }

  if (i == q - p + 1) {
    while (j < r - q) {
      arr[k++] = v_r[j++];
    }
  } else {
    while (i < q - p + 1) {
      arr[k++] = v_l[i++];
    }
  }
}

void merge_sort(int arr[], int p, int r) {
  if (p >= r)
    return;

  int q = (p + r) / 2;

  merge_sort(arr, p, q);
  merge_sort(arr, q + 1, r);

  merge(arr, p, q, r);
}

int main() {
  int n;
  int arr[1000];
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  merge_sort(arr, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << "\n";
  }

  return 0;
}