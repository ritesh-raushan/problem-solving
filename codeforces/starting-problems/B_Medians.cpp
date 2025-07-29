#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    if (n == 1) {
        cout << 1 << endl << 1 << endl;
        return;
    }

    if (k == 1 || k == n) {
        cout << -1 << endl;
        return;
    }

    int p2 = k - k % 2;
    int p3 = k + 1 + k % 2;

    cout << 3 << endl << 1 << " " << p2 << " " << p3 << endl;
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