#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int n, m, i, j, x, arr[100][100];
    cin >> n >> m; 

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    bool found = false; 
    cin >> x; 
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(arr[i][j] == x) {
                found = true; 
            }
        }
    }

    if(found) {
        cout << "will not take number";
    } else {
        cout << "will take number";
    }

    return 0; 
}