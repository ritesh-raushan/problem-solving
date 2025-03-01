#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, mod2 = 998244353, inf = 1e18;

void solve() {
    int n;
    cin >> n;
    while (true) {
        string s = to_string(n);
        size_t pos = s.find("33");
        if (pos != string::npos) {
            s.erase(pos, 2);
            if (s.empty()) {
                n = 0;
                break;
            }
            n = stoll(s);
        } else if (n >= 33) {
            n -= 33;
        } else {
            break;
        }
    }
    if(n == 0) cout << "YES" <<endl;
    else cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}