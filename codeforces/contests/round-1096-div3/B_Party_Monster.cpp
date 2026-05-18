#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int o=0, c=0;
    for(int i=0; i<n;i++){
        if(s[i] == '(') o++;
        else c++;
    }
    if(o == c) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}