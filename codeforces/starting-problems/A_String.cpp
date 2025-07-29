#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;

    int one = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            one++;
        }
    }

    cout << one << endl;
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
