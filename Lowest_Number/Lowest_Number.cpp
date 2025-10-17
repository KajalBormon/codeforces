#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    vector<int> v;

    for(int i = 1; i <= n; i++) {
        int x; 
        cin >> x; 
        v.push_back(x);
    }

    int min = v[0]; 
    int index = 0; 

    for(int i = 0; i < n; i++){
        if(v[i] < min){
            min = v[i];
            index = i; 
        }
    }

    cout << min << " " << index + 1 << endl; 
    return 0; 
}