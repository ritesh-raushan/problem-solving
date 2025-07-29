#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());
    int teams = 0;
    int members = 0;

    for (int i = 0; i < n; i++) {
        members++;
        if (members * a[i] >= x) {
            teams++;
            members = 0;
        }
    }

    cout << teams << endl;
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