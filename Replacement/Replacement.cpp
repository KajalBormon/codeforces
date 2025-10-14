#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    vector<int>v; 
    vector<int>y; 

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x; 
        v.push_back(x);
    }

    for(auto x : v){
        if(x < 0) {
            y.push_back(2);
        } else if(x > 0) {
            y.push_back(1);
        } else {
            y.push_back(0);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << y[i] << " ";
    }

    return 0; 
}