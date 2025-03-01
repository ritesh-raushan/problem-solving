#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    
    int pos = x;
    int first = -1, cycle = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            pos -= 1;
        } else {
            pos += 1;
        }
    
        if (pos == 0) {
            first = i + 1;
            break;
        }
    }    

    if (first == -1) {
        cout << 0 << endl;
        return;
    }

    pos = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            pos -= 1;
        } else {
            pos += 1;
        }
        if(pos == 0) {
            cycle = i + 1;
            break;
        }
    }    

    if(cycle == -1) {
        cout << 1 << endl;
        return;
    }

    int res = 1 + (k - first) / cycle;
    cout << res << endl;
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