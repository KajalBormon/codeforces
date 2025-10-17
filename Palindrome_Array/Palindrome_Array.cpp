#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int n; 
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    

    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x; 
        v1.push_back(x);
    }

    for(int i = n - 1; i >= 0; i--) {
        v2.push_back(v1[i]);
    }

    bool palindrome = true; 
    for(int i = 0; i < n; i++) {
        if(v1[i] != v2[i]) {
            palindrome = false;
        }
    }

    if(palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0; 
}