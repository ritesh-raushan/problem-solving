#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int largestGap = 0;
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i] && abs(a[i] - b[i]) >= largestGap) {
            index = i;
            largestGap = abs(a[i] - b[i]);
        }
    }

    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (i != index && a[i] - largestGap < b[i]) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t-- > 0) {
        solve();
    }

    return 0;
}