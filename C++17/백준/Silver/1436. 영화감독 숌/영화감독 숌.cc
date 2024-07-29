#include <iostream>
typedef long long ll;
using namespace std;

bool isEndNum(ll n) {
  bool isEnd = false;
  bool seq_on = false;
  int seq_count = 0;
  int last;

  while (n) {
    if (n % 10 == 6) {
      if (seq_count == 2) {
        isEnd = true;
        break;
      }
      seq_count++;
    }

    else
      seq_count = 0;

    n /= 10;
  }

  return isEnd;
}

int main() {

  ll n;
  int count = 0;
  ll temp = 666;
  cin >> n;

  while (count != n) {
    if (isEndNum(temp))
      count++;

    temp++;
  }

  cout << --temp;
  return 0;
}