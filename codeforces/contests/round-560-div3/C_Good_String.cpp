// Good String
// Problem Link - https://codeforces.com/contest/1165/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

pair<int,string> check(string s) {
    int count = 0;
    for(int i = 0; i < s.size(); i += 2) {
        if(s[i] == s[i + 1]) {
            s.erase(s.begin() + i + 1);
            count++;
            auto res = check(s);
            return {count + res.first, res.second};
        }
    }

    if(s.size() & 1) {
        s.pop_back();
        count++;
    }
    return {count, s};
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    pair res = check(s);
    cout << res.first << endl;
    cout << res.second << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}