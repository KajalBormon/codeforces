#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    
    int a[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int primary_diagonal = 0; 
    int secondary_diagonal = 0; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if(i == j) {
                primary_diagonal += a[i][j];
            }
            if(i + j == n - 1) {
                secondary_diagonal += a[i][j];
            }
        }
    }

    int diff = abs(primary_diagonal - secondary_diagonal);
    cout << diff; 
    
    return 0; 
}