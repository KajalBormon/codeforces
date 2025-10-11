#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    char c; 
    cin >> c; 

    if(c >= 'a' && c <= 'z') {
        cout << "ALPHA" << endl << "IS SMALL";
    } else if (c >= 'A' && c <= 'Z') {
        cout << "ALPHA" << endl << "IS CAPITAL";
    } else {
        cout << "IS DIGIT";
    }
    return 0; 
}