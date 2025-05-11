#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int sum(int a, int b) {
    return (b - a + 1) * (a + b) / 2;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int lcm = x * y / __gcd(x, y);

    int both = n / lcm;
    int onlyX = n / x - both;
    int onlyY = n / y - both;

    int lar = sum(n - onlyX+ 1, n);
    int sm = sum(1, onlyY);

    cout << lar - sm << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}