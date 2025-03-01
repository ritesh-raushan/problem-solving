#include<bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int a = 0, b = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                a = i + 1; 
                b = j + 1; 
            }
        }
    }
    cout << abs(a - 3) + abs(b - 3);

    return 0;
}