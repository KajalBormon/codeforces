#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    
    vector<int>v; 
    int even = 0, odd = 0, pos = 0, neg = 0; 
    for(int i = 0; i < t; i++) {
        int x; 
        cin >> x; 
        v.push_back(x); 
        if(v[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if(v[i] > 0) {
            pos++;
        } else if(v[i] < 0) {
            neg++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0; 
}