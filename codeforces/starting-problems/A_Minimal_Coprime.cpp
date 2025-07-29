#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int l, r;
    cin >> l >> r;

    int v;
    if(l == 1) {
        v = 1;
    } else {
        v = 0;
    }

    int x = max(2LL, l);
    int y = r - 1;
    if(x <= y) {
        v += (y - x + 1);
    }

    cout << v << endl;
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