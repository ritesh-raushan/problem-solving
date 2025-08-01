#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    cout << 2 << endl;
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for(int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}