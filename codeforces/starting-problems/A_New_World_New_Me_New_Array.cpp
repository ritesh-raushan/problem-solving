#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    
    int mini = -p * n;
    int maxi = p * n;
    
    if (k < mini || k > maxi) {
        cout << -1 << endl;
        return;
    }

    if(k == 0) {
        cout << 0 << endl;
        return;
    }
    
    int res = (abs(k) + p - 1) / p;

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