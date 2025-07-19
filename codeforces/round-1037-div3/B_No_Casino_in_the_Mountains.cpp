#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int hikes = 0;
    int i = 0;

    while(i <= n - k) {
        bool f = true;
        for(int j = 0; j < k; j++) {
            if(a[i + j] == 1) {
                f = false;
                break;
            }
        }
        if(f) {
            hikes++;
            i += k + 1;
        } else {
            i++;
        }
    }

    cout << hikes << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}