#include <iostream>
#include<algorithm>
#include <vector>
using namespace std; 

int main() {
    int n; 
    cin >> n;
    vector<int>v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int minValue = *min_element(v.begin(), v.end());
    int maxValue = *max_element(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        if(v[i] == minValue) {
            v[i] = maxValue;
        } else if(v[i] == maxValue) {
            v[i] = minValue;
        }
        cout << v[i] << " ";
    }

    return 0; 
}