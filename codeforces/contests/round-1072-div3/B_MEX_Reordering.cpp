#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >>x;
    int z=0, o=0;
    for(int i=0; i<n; i++) {
        if(a[i] == 0) z++;
        else if(a[i] == 1) o++;
    }
    if(z == 0) {
        cout << "NO" << endl;
        return;
    }
    if(z == 1) {
        cout << "YES" << endl;
        return;
    }
    if(o > 0) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" <<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}