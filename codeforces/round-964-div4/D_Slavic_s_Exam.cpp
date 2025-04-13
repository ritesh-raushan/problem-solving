#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s, t;
    cin >> s >> t;
    
    int n = s.size(), m = t.size();
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(s[i] == t[j] || s[i] == '?') {
            j++;
        }
        i++;
    }

    if(j < m) {
        cout << "NO" << endl;
        return;
    }

    i = 0, j = 0;
    string res = s;
    while(i < n && j < m) {
        if(res[i] == '?') {
            res[i] = t[j];
            j++;
        }
        i++;
    }

    cout << "YES" << endl;

    for(char &c : res) {
        if(c == '?') {
            c = 'z';
        }
    }

    if(n == m) res = t;

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