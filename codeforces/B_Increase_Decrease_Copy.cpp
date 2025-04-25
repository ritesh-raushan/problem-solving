#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n + 1);
    for (int i = 0; i < n + 1; i++) cin >> b[i];

    int res = 0, extra = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        res += abs(a[i] - b[i]);
        extra = min(extra, abs(a[i] - b[n]));
        extra = min(extra, abs(b[i] - b[n]));
        if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i])) 
            extra = 0;
    }

    cout << res + extra + 1 << endl;
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