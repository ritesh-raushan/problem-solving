#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    vector<vector<int>> v(n, vector<int>(3));
    for(int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    sort(v.begin(), v.end());
    for(auto &row : v) {
        int a = row[0], b = row[1], c = row[2];
        if(x >= a && x <= b && c > x) {
            x = c;
        }
    }
    cout << x << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}