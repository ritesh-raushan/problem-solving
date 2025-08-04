#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if(count(s.begin(), s.end(), c) == n) {
        cout << 0 << endl;
        return;
    }
    vector<int> res;
    for(int x = 1; x <= n; ++x) {
        bool ok = true;
        for(int i = x; i <= n; i += x) {
            if(s[i-1] != c) {
                ok = false;
                break;
            }
        }
        if(ok) {
            cout << 1 << endl << x << endl;
            return;
        }
    }
    cout << 2 << endl << n << " " << n-1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}