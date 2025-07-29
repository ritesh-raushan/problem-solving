#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool flag = false;

    for(int i = 0; i < n - 1; i++) {
        int mini = min(a[i], a[i + 1]);
        int maxi = max(a[i], a[i + 1]);
        if(maxi < 2*mini) {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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