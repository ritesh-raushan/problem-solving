#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        if(s[i] != c) a.push_back(i + 1);
    }
    int count = 0;
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}