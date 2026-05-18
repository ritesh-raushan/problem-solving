#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int s, k,m;
    cin >> s >> k >>m;
    int ans;
    if(k > m) {
        ans = 0;
    }
    else if(k == m) {
        if(s > k) {
            ans = k;
        } esel
    }
    if(s<k && s<m) ans = 0;
    if(s<k && s>m) ans =0;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}