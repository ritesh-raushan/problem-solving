#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] == a[0]) {
            l++;
        } else {
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if (a[i] == a[n - 1]) {
            r++;
        } else {
            break;
        }
    }

    int res = 0;
    if(a[0] == a[n - 1]) {
        res = n - (l + r);
    } else {
        res = n - max(l, r);
    }

    if(res > 0) cout << res << endl;
    else cout << 0 << endl;
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