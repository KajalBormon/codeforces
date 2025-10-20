#include <iostream>
using namespace std; 

int main() {
    string s; 
    getline(cin, s);

    for(int i = 0; i < int(s.size()); i++) {
        if(s[i] == '\\') {
            break; 
        } else {
            cout << s[i];
        }
    }
    return 0; 
}