#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    int ans = 0;
    int asum = 0;
    int maxb = 0;
    for(int m = 0; m < min(n, k); m++) {
        asum += a[m];
        maxb = max(maxb, b[m]);
        int extra = k - (m + 1);
        int current = asum + extra * maxb;
        ans = max(ans, current);
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}