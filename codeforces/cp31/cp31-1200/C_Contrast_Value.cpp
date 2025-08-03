#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> b;
    for(int i = 0; i < n; i++) {
        int r = a[i];
        if(!b.empty() && r == b.back()) continue;
        while(b.size() >= 2) {
            int q = b.back();
            int p = b[b.size() - 2];
            if(abs(q - p) + abs(r - q) == abs(r - p)) {
                b.pop_back();
            } else {
                break;
            }
        }
        b.push_back(r);
    }
    cout << b.size() << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}