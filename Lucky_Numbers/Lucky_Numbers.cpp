#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int n; 
    cin >> n; 

    int q = n % 10;
    int r = n / 10;
    
    if(q % r == 0 || r % q == 0) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;
    }
    return 0; 
}