#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, mod2 = 998244353, inf = 1e18;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    set<int> know;
    for(int i = 0; i < k; i++) {
        int q;
        cin >> q;
        know.insert(q);
    }
    
    string result;
    for(int i = 0; i < m; i++) {
        result += (know.size() == n-1 && !know.count(a[i])) || know.size() == n ? '1' : '0';
    }
    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}