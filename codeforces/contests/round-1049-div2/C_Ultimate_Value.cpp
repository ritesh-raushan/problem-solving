#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto&x:a) cin >> x;
    if(n == 1) {
        cout << a[0] << endl;
        return;
    } else if(n == 2) {
        cout << a[0]-a[1] << endl;
        return;
    } else {
        int esum = 0, osum = 0;
        for(int i=0; i<n; i++) {
            if(i%2 == 0) esum += a[i];
            else osum += a[i];
            if(esum > osum) 
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}