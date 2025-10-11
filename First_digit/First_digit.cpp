#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int a;
    cin >> a; 

    int b = a / 1000; 
    if(b % 2 == 0){
        cout << "EVEN";
    } else {
        cout << "ODD";
    }
    return 0; 
}