#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    cout << "1" << " ";
    for(int i = 2; i <= n - 2; i++) {
        cout << i - 1 << " ";
    }
    cout << "1" << " " << "2" << endl;
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
