#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    char c; 
    cin >> c; 

    if(c >= 'a' && c <= 'z') {
        cout << char(c - 32); 
    } else {
        cout << char(c + 32); 
    }
    return 0; 
}