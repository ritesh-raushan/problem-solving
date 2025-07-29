// Polycarp Training
// Problem Link - https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int k = 1;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(k <= a[i]) {
            count++;
            k++;
        }
    }
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}