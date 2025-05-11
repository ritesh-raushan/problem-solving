#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if(sum % 3 != 0) {
        cout << "NO" << endl;
        return;
    }

    int x = sum / 3;
    if(x >= a && x >= b && x <= c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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