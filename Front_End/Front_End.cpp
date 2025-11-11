#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = 0;
    int end = n - 1;

    while (first <= end) {
        if (first == end) {
            cout << arr[first];
        } else {
            cout << arr[first] << " " << arr[end] << " ";
        }
        first++;
        end--;
    }

    return 0;
}
