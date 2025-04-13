#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    if(a[0].first >= s) {
        cout << "YES" << endl;
        return;
    }

    for(int i = 1; i < n; i++) {
        int free = a[i].first - a[i - 1].second;
        if(free >= s) {
            cout << "YES" << endl;
            return;
        }
    }

    if(m - a[n-1].second >= s) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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