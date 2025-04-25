#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int maxi = 0;

    int a3 = a4 - a2;
    int fib1 = (a3 + a2 == a4) + (a2 + a1 == a3) + (a3 + a4 == a5);
    maxi = max(maxi, fib1);

    a3 = a5 - a4;
    int fib2 = (a3 + a2 == a4) + (a2 + a1 == a3) + (a3 + a4 == a5);
    maxi = max(maxi, fib2);

    a3 = (a5 - a2) / 2;
    if(2 * a3 == (a5 - a2)) {
        int fib3 = (a3 + a2 == a4) + (a2 + a1 == a3) + (a3 + a4 == a5);
        maxi = max(maxi, fib3);
    }

    cout << maxi << endl;
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