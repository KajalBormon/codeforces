#include <iostream>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    int sum = 0;

    string digits; 
    cin >> digits; 

    for(char c : digits) {
        sum += c - '0';
    }
    
    cout << sum;
    return 0; 
}