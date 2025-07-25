#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int t = 0;
    for(int i = 0; i < s.size(); i++) 
        if(s[i] == 'T') 
            t++;
    for(int i = 0; i < t; i++) 
        cout << 'T';
    for(int i = 0; i < s.size(); i++) 
        if(s[i] != 'T') 
            cout << s[i];
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}