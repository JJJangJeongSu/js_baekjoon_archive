#include <iostream>

using namespace std;

int count;

void print_arr(int arr[]) {
  for (int i = 0; i < count; i++)
    cout << arr[i] << " ";

  cout << '\n';
}

int get_max_price(int n, int pack_price[]) {
  int *max_price_list = new int[n + 1];
  int max_price;
  for (int i = 0; i <= n; i++)
    max_price_list[i] = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      max_price_list[i] =
          max(max_price_list[i], pack_price[j - 1] + max_price_list[i - j]);
    }
  }

  max_price = max_price_list[n];

  delete[] max_price_list;

  return max_price;
}

int main() {
  int n;
  int pack_price[1000];
  int cur_price;

  cin >> n;

  count = n;

  for (int i = 0; i < n; i++) {
    cin >> cur_price;
    pack_price[i] = cur_price;
  }

  cout << get_max_price(n, pack_price);

  return 0;
}
