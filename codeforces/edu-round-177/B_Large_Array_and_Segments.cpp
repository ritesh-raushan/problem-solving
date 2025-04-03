#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int &ai : a) cin >> ai;

    vector<int> pre(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }
    int totalSum = pre[n];

    int ans = 0;
    for (int l = 0; l < n; l++) {
        int left = l, right = n * k, found = -1;
        int cycles = 0;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            int cycleCount = mid / n;
            int sum = (cycleCount * totalSum) + (pre[mid % n] - pre[l]);

            if (sum >= x) {
                found = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if(found != -1) {
            int remainCycle = (n * k - found) / n;
            ans += remainCycle + 1;
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