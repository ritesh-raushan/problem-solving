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

    bool zero = false;
    for(int i = 0; i < n; i++) {
        if((a[i] <= 2*i) || (a[i] <= 2*(n-(i+1)))) zero = true; 
    }

    if(zero) cout << "NO" << endl;
    else cout << "YES" << endl;
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