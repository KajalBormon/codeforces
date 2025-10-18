#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int smallest = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int result = v[i] + v[j] + j - i;
                if (result < smallest) {
                    smallest = result;
                }
            }
        }

        cout << smallest << "\n";
    }

    return 0;
}
