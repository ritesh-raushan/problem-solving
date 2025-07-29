#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int change = 0;
    if(s[0] == '1') change++;
    for(int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            change++;
        }
    }

    int ans = 0;
    if(change >= 3) ans = n + change - 2;
    else if(change == 2) ans = n + change - 1;
    else ans = n + change;

    cout << ans << endl;
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