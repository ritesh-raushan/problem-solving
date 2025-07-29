#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    
    if (s < reversed_s) {
        cout << "YES" << endl;
        return;
    }
    
    int required_swaps = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != reversed_s[i]) {
            required_swaps++;
        }
    }
    
    if (required_swaps <= k) {
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