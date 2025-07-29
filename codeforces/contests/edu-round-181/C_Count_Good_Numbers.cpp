#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int good(int n) {
    if(n <= 0) return 0;
    int a = n / 2, b = n / 3, c = n / 5, d = n / 7;
    int ab = n / 6, ac = n / 10, ad = n / 14, bc = n / 15, bd = n / 21, cd = n / 35;
    int abc = n / 30, abd = n / 42, acd = n / 70, bcd = n / 105;
    int abcd = n / 210;

    int bad = a + b + c + d - (ab + ac + ad + bc + bd + cd) + (abc + abd + acd + bcd) - abcd;

    return n - bad;
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << good(r) - good(l - 1) << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}