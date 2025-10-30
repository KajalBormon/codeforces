#include <iostream>
#include <algorithm>
#include <math.h>
#include <sstream>
using namespace std; 

int main() {
    int t; 
    cin >> t; 

    while(t--) {
        string s1, s2; 
        cin >> s1 >> s2; 
        
        int len1 = s1.length(); 
        int len2 = s2.length(); 
        int mx = max(len1, len2);


        string result = "";

        for(int i = 0; i < mx; i++) {
            if (i < len1) result += s1[i]; 
            if (i < len2) result += s2[i]; 
        }

        cout << result << endl; 
        
    }
    return 0; 
}