#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> a(n);
    int l = 1, h = n;

    for(int i = n - 2; i >= 0; --i) {
        if(s[i] == '<') {
            a[i + 1] = l++;
        } else {
            a[i + 1] = h--;
        }
    }

    a[0] = l;

    for(int i = 0; i < n; ++i) {
        cout << a[i];
        if (i == n - 1) cout << endl;
        else cout << ' ';
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