#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    
    vector<int> a(n, 0);
    a[0] = k * b;
    s -= k * b;
    
    if (s < 0) {
        cout << "-1" << endl;
        return;
    }
    
    for (int i = 0; i < n; ++i) {
        int remain = min(k - 1, s);
        a[i] += remain;
        s -= remain;
    }
    
    if (s > 0) cout << "-1" << endl;
    else {
        for (int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << endl;
    }
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