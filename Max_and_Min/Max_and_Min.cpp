#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int a, b, c; 
    cin >> a >> b >> c; 

    if(a <= b && a <= c) {
        cout << a << " ";
    } else if (b <= c && b <= a) {
        cout << b << " "; 
    } else{
        cout << c << " "; 
    }

    if(a >= b && a >= c) {
        cout << a;
    } else if (b >= c && b >= a) {
        cout << b; 
    } else{
        cout << c; 
    }

    return 0; 
}