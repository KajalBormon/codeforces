#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    string s; 
    cin >> s; 

    bool found = true; 
    int i = 0, j = s.size() - 1; 
    while(i < j) {
        if(s[i] != s[j]) {
            found = false; 
            break; 
        }
        i++; 
        j--; 
    }

    if(found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0; 
}