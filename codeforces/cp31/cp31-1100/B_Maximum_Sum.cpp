#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto&x:a) cin >> x;
    sort(a.begin(), a.end());
    vector<int>pref(n+1, 0);
    for(int i=0; i<n; i++) {
        pref[i+1] = pref[i] + a[i];
    }
    int total = pref[n];
    int x = LLONG_MAX;
    for(int i = 0; i <= k; i++) {
        int mini = pref[i * 2];
        int maxi = pref[n] - pref[n - (k-i)];
        x = min(x, mini+maxi);
    }
    cout << total-x << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}