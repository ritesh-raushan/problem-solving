#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    int res = min(z, c);
    z -= res;
    c -= res;

    int giveL = min(y, b);
    res += giveL;
    y -= giveL;
    b -= giveL;

    int xltol = min(z, b);
    res += xltol;
    z -= xltol;
    b -= xltol;

    int giveS = min(x, a);
    res += giveS;
    x -= giveS;
    a -= giveS;

    int ltos = min(y, a);
    res += ltos;
    y -= ltos;
    a -= ltos;

    int xltos = min(z, a);
    res += xltos;
    z -= xltos;
    a -= xltos;

    cout << res << endl;
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