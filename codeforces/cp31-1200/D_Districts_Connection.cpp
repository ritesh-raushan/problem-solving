#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    int other = -1;
    for(int i = 2; i <= n; i++) {
        if(a[i] != a[1]) {
            other = i;
            break;
        }
    }

    if(other == -1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for(int i = 2; i <= n; i++) {
        if(a[i] != a[1]) {
            cout << 1 << " " << i << endl;
        }
    }

    for(int i = 2; i <= n; i++) {
        if(a[i] == a[1]) {
            cout << other << " " << i << endl;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}