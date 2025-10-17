#include <iostream>
using namespace std; 

int main() {
    int a, b, result; 
    cin >> a >> b;

    result = a - b; 
    if(result > 0) {
        cout << result << endl;
    } else {
        cout << "0" << endl;
    }
    return 0; 
}