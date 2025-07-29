#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,x, y, z;
    cin >> n;
    int solvedProblem = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        if(x+y+z >= 2) solvedProblem += 1;
    }
    cout << solvedProblem;

    return 0;
}