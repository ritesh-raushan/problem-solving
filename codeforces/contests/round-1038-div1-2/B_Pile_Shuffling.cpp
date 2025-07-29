#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e0 = max(0LL, a - c);
        int e1 = max(0LL, b - d);
        count += e0;
        count += e1;
        if(e1 > 0) {
            count += min(a, c);
        }
    }
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}