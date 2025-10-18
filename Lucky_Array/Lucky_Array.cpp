#include <iostream>
#include <vector>
#include<map>
using namespace std; 

int main() {
    int n; 
    cin >> n;
    vector<int> arr;
    map<int, int> freq;

    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x; 
        arr.push_back(x);
        freq[x]++;
    }

    auto it = freq.begin(); 
    
    if(it->second % 2 != 0) {
        cout << "Lucky";
    } else {
        cout << "Unlucky";
    }
    return 0; 
}