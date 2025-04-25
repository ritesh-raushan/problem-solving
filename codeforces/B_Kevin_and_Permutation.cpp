#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, mod2 = 998244353, inf = 1e18;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
        b[i] = i + 1;
    }
    
    sort(b.begin(), b.end());
    
    vector<int> ans(n);
    int j = 0, z = n - 1;
    
    for (int i = 0; i < n; i++) {
        if ((i + 1) % k == 0) {
            ans[i] = b[j];
            j++;
        } else {
            ans[i] = b[z];
            z--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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