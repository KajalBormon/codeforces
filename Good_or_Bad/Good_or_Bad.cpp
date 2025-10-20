#include <iostream>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    
    while(t--) {
        string s; 
        cin >> s;

        bool good = false; 
        for(int i = 0; i < int(s.size()); i++) {
            string sub = s.substr(i, 3);
            if(sub == "010" || sub == "101") {
                good = true; 
                break; 
            }
        }

        if(good) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }
    return 0; 
}