#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;
    map<char, int> freq;
    int count = 0;
    vector<int> distinct(n, 0);
    for(int i = 0; i < n; i++) {
        freq[s[i]]++;
        if(freq[s[i]] == 1) {
            count++;
        }
        distinct[i] = count;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += distinct[i];
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}