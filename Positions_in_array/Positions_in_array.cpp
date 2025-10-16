#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int n;
    vector<int> v; 
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x; 
        v.push_back(x);
    }

    for(int i = 0; i < n; i++) {
        if(v[i] <= 10) {
            cout << "A[" << i << "] = " << v[i] << endl;
        }
    }
    return 0;  
}