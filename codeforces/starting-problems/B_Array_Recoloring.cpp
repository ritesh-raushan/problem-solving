#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        vector<int> temp = a;
        temp[i] = 0;

        sort(temp.rbegin(), temp.rend());
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += temp[i];
        }
        ans = max(ans, sum + a[i]);
    }
    cout << ans << endl;
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