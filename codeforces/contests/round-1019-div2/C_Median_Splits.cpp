#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    bool first = false;
    if(a[0] <= k || a[1] <= k) first = true;

    bool last = false;
    if(a[n-1] <= k || a[n-2] <= k) last = true;

    int count = 0;
    for(int num : a) {
        if(num <= k) {
            count++;
        }
    }
    
    if(count >= 2 && (first || last)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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