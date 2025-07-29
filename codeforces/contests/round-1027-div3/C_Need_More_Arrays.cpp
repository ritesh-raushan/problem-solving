#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0, prev = -2;
    for (int i = 0; i < n; i++) {
        if (a[i] > prev + 1) {
            count++;
            prev = a[i];
        }
    }
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}