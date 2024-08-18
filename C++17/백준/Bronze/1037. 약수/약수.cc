#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[50];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minValue = *min_element(arr, arr + n);
    int maxValue = *max_element(arr, arr + n);

    cout << minValue * maxValue << endl;

    return 0;
}
