#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> last(n + 1, 0);
    for(int k = 1; k <= n; k++) {
        last[k] = last[k - 1] + a[n - k];
    }

    vector<int> maxi(n + 1, -INF);
    for(int i = 1; i <= n; i++) {
        maxi[i] = max(maxi[i - 1], a[i - 1]);
    }

    for(int k = 1; k <= n; k++) {
        int ans = max(last[k], maxi[n - k] + last[k - 1]);
        cout << ans << " ";
    }
    cout << endl;
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