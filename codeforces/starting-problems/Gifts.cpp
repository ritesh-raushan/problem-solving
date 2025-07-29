#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, mod2 = 998244353, inf = 1e18;
void solve() {
    int n;
    cin >> n;

    vector<int> gifts(n);
    for(int i = 0; i < n; i++) {
        cin >> gifts[i];
    }

    int count = n-1;
    for(int i = n - 2; i >= 0; i--) {
        if(gifts[i] <= gifts[i+1]) count--;
        else break;
    }

    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}