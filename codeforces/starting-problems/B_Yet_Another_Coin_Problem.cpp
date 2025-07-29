#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int recFunc(int n) {
    int ans = 0;
    ans += n / 15;
    n %= 15;
    ans += n / 6;
    n %= 6;
    ans += n / 3;
    n %= 3;
    ans += n;
    return ans;
}

void solve() {
    int n;
    cin >> n;

    if(n < 10) {
        cout << recFunc(n) << endl;
    } else if(n < 20) {
        cout << min(recFunc(n), recFunc(n - 10) + 1) << endl;
    } else {
        cout << min({recFunc(n), recFunc(n - 10) + 1, recFunc(n - 20) + 2}) << endl;
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