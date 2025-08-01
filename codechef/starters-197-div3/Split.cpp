#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(s[0] == '1') {
        cout << 1 << endl; 
        return;
    }
    if(n == k) {
        cout << 1 << endl;
        return;
    }
    else cout << 3 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}