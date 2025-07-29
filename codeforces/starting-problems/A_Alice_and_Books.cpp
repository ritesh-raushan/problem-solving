#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int maxi = 0;

    for(int i = 1; i < n; i++) {
        int firstMax = a[i - 1];
        int secondMax = a[n - 1];

        int total = firstMax + secondMax;

        maxi = max(maxi, total);
    }

    cout << maxi << endl;
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