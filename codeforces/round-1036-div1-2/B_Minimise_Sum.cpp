#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n; 
    cin >> n;
    int a1 = 0, a2 = 0, x; 
    if (n >= 1) cin >> a1;
    if (n >= 2) cin >> a2;
    for (int i = 2; i < n; ++i) cin >> x;
    cout << a1 + min(a1, a2) << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}