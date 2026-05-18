#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;
    for(int i=1; i<n; i++) {
        if(a[i]%2 == a[i-1]%2) {
            cout << "NO" << endl;
            return;
        }
        
    }
    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}