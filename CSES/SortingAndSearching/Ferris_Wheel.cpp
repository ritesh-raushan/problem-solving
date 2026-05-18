#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    sort(v.begin(), v.end());
    int l = 0, r = n-1, count = 0;
    while(l <= r) {
        if(v[l] + v[r] <= x) {
            count++;
            l++;
            r--;
        } else {
            count++;
            r--;
        }
    }
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
    return 0;
}