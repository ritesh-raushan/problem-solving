#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int open = n - k;
    if(open == 0) {
        cout << 0 << endl;
        return;
    }

    int l = (open - 1) / 2;
    int r = (n - (open - 1) / 2) - 1;

    cout << a[r] - a[l] + 1 << endl;
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