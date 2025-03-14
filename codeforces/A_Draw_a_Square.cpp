#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int l, r, d, u;
    cin >> l >> r >> d >> u;

    if (l==r && d==u && r==d) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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