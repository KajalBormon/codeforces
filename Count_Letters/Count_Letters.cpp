#include <iostream>
#include <algorithm>
#include <map>
using namespace std; 

int main() {
    string s; 
    cin >> s; 
    map<char, int> letterCount;
    for(int i = 0; i < int(s.size()); i++) {
        letterCount[s[i]]++;
    }

    for(auto it : letterCount) {
        cout << it.first << " " << ":" << " " << it.second << endl;
    }
    return 0; 
}