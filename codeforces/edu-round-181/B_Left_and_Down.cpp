#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    int g = __gcd(a,b);
    if(a/g <= k && b/g <= k) cout << 1 << "\n";
    else cout << 2 << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}