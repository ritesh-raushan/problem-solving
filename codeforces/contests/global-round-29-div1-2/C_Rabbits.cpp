#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a(n, '0');
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            if(i+2 < n && s[i+1] == '0' && s[i+2] == '1') {
                if(i-1 >= 0 && s[i-1] == '0' && a[i-1] == '0') {
                    a[i-1] = '1';
                    i += 2;
                } else if(i+3 < n && s[i+3] == '0' && a[i+3] == '0') {
                    a[i+3] = '1';
                    i += 2;
                } else {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}