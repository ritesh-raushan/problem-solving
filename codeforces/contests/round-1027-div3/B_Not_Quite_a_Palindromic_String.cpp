#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zero++;
        else one++;
    }

    int maxi = (one / 2) + (zero / 2);
    int mini = (max(zero, one) - min(zero, one))/2;

    if(k >= mini && k <= maxi && k % 2 == mini % 2) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}