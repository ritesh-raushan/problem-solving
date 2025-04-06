#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a;

    if (n % 2 == 0) {
        cout << -1 << endl;
    } else {
        int mid = (n + 1) / 2;
        for (int i = n; i > mid; i--) a.push_back(i);
        a.push_back(mid);
        for (int i = mid - 1; i >= 1; i--) a.push_back(i);

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
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