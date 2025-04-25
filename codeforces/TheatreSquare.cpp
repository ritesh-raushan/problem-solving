#include<bits/stdc++.h>
using namespace std;

int main(){
    long int a, b, c;
    cin >> a >> b >> c;

    long long int first = 0;
    long long int second = 0;

    if(a % c != 0){
        first = first + (a/c) + 1;
    } else first = first + (a/c);

    if(b % c != 0){
        second = second + (b/c) + 1;
    } else second = second + (b/c);
    
    long long int res = first * second;
    cout << res;

    return 0;
}