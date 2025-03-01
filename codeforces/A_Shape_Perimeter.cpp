#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> vec(n);
    for(int i = 0; i < n; ++i) {
        cin >> vec[i].first >> vec[i].second;
    }

    int ans = 4 * m * n;
    for(int i = 1; i < n; i++) {
        ans -= 2 * (m - vec[i].first + m - vec[i].second);
    }

    cout << ans << endl;
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