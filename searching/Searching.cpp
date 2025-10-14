#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int t, search; 
    cin >> t; 
    vector<int>v; 

    for(int i = 0; i < t; i++) {
        int x; 
        cin >> x; 
        v.push_back(x);
    }

    int value; 
    bool found = false; 
    cin >> search; 
    for(int j = 0; j < t; j++) {
        if(search == v[j]) {
            value = j;
            found = true;
            break; 
        }
    }

    if(found) {
        if(value == 0) {
            cout << "0";
        } else {
            cout << value; 
        }
    } else {
        cout << "-1";
    }

    return 0; 
}