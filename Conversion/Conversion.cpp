/* ------Using C++ language------ */
#include <iostream>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <cctype>
using namespace std; 

int main() {
    string s; 
    getline(cin, s);
    
    stringstream ss(s); 
    char ch; 

    while(ss >> ch) {
        if(ch == ',') {
            cout << " ";
        } else if(isupper(ch)) {
            cout << char(tolower(ch));
        } else {
            cout << char(toupper(ch));
        }
    }

    return 0; 
}


/* ------Using C language------ */ 
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    
    // Read a full line of input (including spaces and commas)
    fgets(s, sizeof(s), stdin);
    
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        
        if (ch == ',') {
            printf(" ");
        } 
        else if (isupper(ch)) {
            printf("%c", tolower(ch));
        } 
        else if (islower(ch)) {
            printf("%c", toupper(ch));
        } 
        else {
            printf("%c", ch);
        }
    }

    return 0;
}
