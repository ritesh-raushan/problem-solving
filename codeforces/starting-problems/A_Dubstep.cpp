#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    string v = "";
    bool f = true;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            if(!f) v += " ";
            continue;
        } else {
            f = false;
            v += s[i];
        }
    }
    cout << v;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}