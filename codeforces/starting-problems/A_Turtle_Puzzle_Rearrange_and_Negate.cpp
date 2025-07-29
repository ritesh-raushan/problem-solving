#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int initialSum = accumulate(a.begin(), a.end(), 0LL);

    int maxSum = initialSum;
    for(int l = 0; l < n; ++l) {
        for(int r = l; r < n; ++r) {
            int currentSum = initialSum;
            for(int i = l; i <= r; ++i) {
                currentSum -= 2 * a[i];
            }
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << maxSum << endl;
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