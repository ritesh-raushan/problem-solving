#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int maxiKnown = LLONG_MIN;
    bool missing = false;
    for(int i = 0; i < n;) {
        if(s[i] == '1') {
            int current = 0, maxiNow = LLONG_MIN;
            while(i < n && s[i] == '1') {
                current = max(a[i], current + a[i]);
                maxiNow = max(maxiNow, current);
                i++;
            }
            if(maxiNow > k) {
                cout << "No" << endl;
                return;
            }
            maxiKnown = max(maxiKnown, maxiNow);
        } else {
            missing = true;
            i++;
        }
    }

    if(missing || maxiKnown == k) {
        cout << "Yes" << endl;
        bool filled = false;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                cout << a[i] << " ";
            } else if(!filled) {
                cout << k << " ";
                filled = true;
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}