#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b;
    cin>>a>>b;
    if(a%2 == 1) {
        if(b% 2 == 1) {
            cout << a*b+1 << endl;
        } else {
            if((b/2) % 2 == 1) {
                cout << -1 << endl;
            } else{
                cout << a*(b / 2)+ 2 << endl;
            }
        }
    } else{
        if(b % 2 == 1) {
            cout << -1 << endl;
        } else {
            cout << a*(b / 2)+ 2 << endl;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}