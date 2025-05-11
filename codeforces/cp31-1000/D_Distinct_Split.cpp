#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> v1(n, 0), v2(n, 0);
    map<char, int> m1, m2;
    int ans = 0;

    int j = n - 1;
    for(int i = 0; i < n; i++) {
        m1[s[i]]++;
        v1[i] = m1.size();

        m2[s[j]]++;
        v2[j] = m2.size();
        j--;
    }

    for(int i = 0; i < n - 1; i++) {
        if(v1[i] + v2[i + 1] > ans) {
            ans = v1[i] + v2[i + 1];
        }
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