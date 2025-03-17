#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    
    int res = 0;
    
    if (n % 2 != 0) {
        res = 1;
        n -= k;
    }
    if (n > 0) {
        res += (n + k - 2) / (k - 1);
    }
    
    cout << res << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}