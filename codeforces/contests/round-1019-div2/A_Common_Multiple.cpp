#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    set<int> s;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }

    cout << s.size() << endl;
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