#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int m = 0, s = 0;

    for(int i = 0; i < n - 1; i++) {
        if(a[i] > b[i + 1]) {
            m += a[i];
            s += b[i + 1];
        }
    }
    m += a[n - 1];

    cout << m - s << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}