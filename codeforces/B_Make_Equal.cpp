#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = 0;
    for(int i = 0; i < n; i++) {
        k += a[i];
    }

    k /= n;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] < k) {
            cout << "NO" << endl;
            return;
        }
        a[i + 1] += a[i] - k;
        a[i] = k;
    }

    cout << "YES" << endl;
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