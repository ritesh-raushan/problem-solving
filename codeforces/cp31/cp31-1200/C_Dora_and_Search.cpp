#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n - 1;
    int i = 1, j = n;

    while(l <= r) {
        int count = 0;

        if(a[l] == i) {
            l++;
            i++;
        } else count++;

        if(l <= r && a[r] == i) {
            r--;
            i++;
        } else count++;

        if(l <= r && a[l] == j) {
            l++;
            j--;
        } else count++;

        if(l <= r && a[r] == j) {
            r--;
            j--;
        } else count++;

        if(count == 4) break;
    }

    if(l > r) {
        cout << -1 << endl;
    } else {
        cout << (l + 1) << " " << (r + 1) << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}