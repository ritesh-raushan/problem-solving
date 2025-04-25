#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int promo = b - a + 1;
    int k;

    if(promo > 0) {
        k = min(n, promo);
    } else {
        k = 0;
    }

    int promoPrice = k * b - (k * (k - 1)) / 2;
    int remainPrice = (n - k) * a;

    cout << promoPrice + remainPrice << endl;
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