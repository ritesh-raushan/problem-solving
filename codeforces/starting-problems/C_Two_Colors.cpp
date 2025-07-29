#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int res = 0;

    for(int x = 1; x <= n - 1; x++) {
        int c1 = a.end() - lower_bound(a.begin(), a.end(), x);
        int c2 = a.end() - lower_bound(a.begin(), a.end(), n - x);
        int common = a.end() - lower_bound(a.begin(), a.end(), max(x, n - x));

        res += (c1 * c2 - common);
    }

    cout << res << "\n";
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