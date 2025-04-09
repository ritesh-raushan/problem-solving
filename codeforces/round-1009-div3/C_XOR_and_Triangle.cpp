#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int x;
    cin >> x;

    for (int y = x - 1; y >= 1; --y) {
        int z = x ^ y;
        if ((x + y > z) && (x + z > y) && (y + z > x)) {
            cout << y << endl;
            return;
        }
    }

    cout << -1 << endl;
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