#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int baseR = r / (b + 1);
    int extra = r % (b + 1);

    for(int i = 0; i < b + 1; i++) {
        int countR = baseR;
        if(i < extra) countR += 1;
        for(int j = 0; j < countR; j++) cout << 'R';
        if(i < b) cout << 'B';
    }
    cout << endl;
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