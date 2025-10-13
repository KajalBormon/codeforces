#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    char c; 
    cin >> c; 
    if(c == 'z') {
        cout << 'a';
    } else {
        int ch = int(c) + 1; 
        cout << char(ch);
    }
    
    return 0; 
}