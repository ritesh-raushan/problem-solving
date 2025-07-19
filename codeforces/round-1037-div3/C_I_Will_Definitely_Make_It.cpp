#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int hk = v[k - 1];
    int maxi = *max_element(v.begin(), v.end());

    if(hk == maxi) {
        cout << "YES" << endl;
        return;
    }

    set<int> s(v.begin(), v.end());
    vector<int> u(s.begin(), s.end());

    int x = 0;
    for(int i = 0; i < u.size(); i++) {
        if(u[i] >= hk) {
            x = i;
            break;
        }
    }

    bool f = true;
    for(int i = x; i + 1 < u.size(); i++) {
        if(u[i + 1] - u[i] > hk) {
        f = false;
            break;
        }
    }

    if (f) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}