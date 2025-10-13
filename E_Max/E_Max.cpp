#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <climits>

using namespace std; 

int main() {
    int t; 
    cin >> t; 

    vector<int>v; 
    int mx = INT_MIN; 

    for(int i = 0; i < t; i++) {
        int x; 
        cin >> x; 

        v.push_back(x);
    }

    for(auto p : v) {
        if(p > mx) {
            mx = p;
        }
    }
    cout << mx;

    return 0; 
}