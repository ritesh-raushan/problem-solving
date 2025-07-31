#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int sum = 0, zero = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        if(x == 0) zero++;
    }
    cout << sum + zero << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}