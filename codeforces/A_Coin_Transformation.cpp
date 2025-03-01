#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, mod2 = 998244353, inf = 1e18;
void solve() {
    int n;
    cin >> n;
    int coins = 1;
    while (n > 3) {
        n /= 4;
        coins *= 2;
    }
    cout << coins << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}