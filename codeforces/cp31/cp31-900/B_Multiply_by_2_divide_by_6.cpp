#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int cnt2 = 0, cnt3 = 0;

    while(n % 2 == 0) {
        n /= 2;
        cnt2++;
    }

    while(n % 3 == 0) {
        n /= 3;
        cnt3++;
    }

    if(n != 1 || cnt2 > cnt3) {
        cout << -1 << endl;
    } else {
        cout << (cnt3 - cnt2) + cnt3 << endl;
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