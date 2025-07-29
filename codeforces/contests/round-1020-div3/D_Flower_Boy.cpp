#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool check(const vector<int>& ai, const vector<int>& bi) {
    int count = 0;
    for(int i = 0; i < ai.size(); i++) {
        if(count < bi.size() && ai[i] >= bi[count]) {
            count++;
        }
    }
    return count == bi.size();
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    if(check(a, b)) {
        cout << 0 << endl;
        return;
    }

    int l = 1, r = 1e9 + 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        bool flag = false;

        for (int i = 0; i <= n; i++) {
            vector<int> updated = a;
            updated.insert(updated.begin() + i, mid);
            if (check(updated, b)) {
                flag = true;
                break;
            }
        }

        if(flag) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
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