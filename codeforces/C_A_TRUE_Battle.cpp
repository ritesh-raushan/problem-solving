#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') vec[i] = 1;
    }

    bool win = false;
    if(vec[0] || vec[n - 1]) win = true;
    for(int i = 1; i < n; i++) {
        if(vec[i] && vec[i - 1]) win = true;
    }
    if(win) {
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

    while (t--) {
        solve();
    }

    return 0;
}