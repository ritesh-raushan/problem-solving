#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pb push_back

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> ans;
    for(int i = 0; i < m; i++) {
        if(b[i] >= a[i]) {
            ans.pb(a[i]);
        } else ans.pb(-1);
    }
    for(int &i : ans) cout << i << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
    return 0;
}