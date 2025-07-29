#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int cnt[10] = {};
    bool flag = false;
    
    for (int i = 0; i < n; i++) {
        int dig;
        cin >> dig;
        cnt[dig]++;
        if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 &&
            cnt[3] >= 1 && cnt[5] >= 1 && !flag) {
                cout << i + 1 << endl;
                flag = true;
            }
    }
    if (!flag) cout << 0 << endl;
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