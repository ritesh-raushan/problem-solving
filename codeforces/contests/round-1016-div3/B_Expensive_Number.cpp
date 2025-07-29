#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    
    int n = s.size();
    int b = 0, count = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '0') count++;
        else b = max(b, count + 1);
    }

    cout << s.size() - b << endl;
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