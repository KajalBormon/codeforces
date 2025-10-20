#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 

    while(t--) {
        int a, b; 
        cin >> a >> b;

        if(a == b) {
            cout << "Square" << endl;
        } else {
            cout << "Rectangle" << endl;
        }
    }
    return 0; 
}