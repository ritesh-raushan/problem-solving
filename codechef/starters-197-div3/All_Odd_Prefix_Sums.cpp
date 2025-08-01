#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int oc = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 2 != 0) oc++;
    }
    if(oc == 0 || oc >= 2) cout << "No" << endl;
    else cout << "Yes" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}