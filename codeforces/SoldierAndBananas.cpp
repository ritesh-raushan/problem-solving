#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int k, n, w;
    cin >> k >> n >> w;

    long long sum = 0;
    for(int i = 1; i <= w; i++){
        sum += k * i;
    }

    long long res = sum - n;
    if(res < 0) cout << 0;
    else cout << res;

    return 0;
}