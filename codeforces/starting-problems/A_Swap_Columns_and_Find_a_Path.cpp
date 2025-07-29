#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a1(n), a2(n);
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> a2[i];

    int result = LLONG_MIN;

    for (int pivot = 0; pivot < n; pivot++) {
        int path_cost = a1[pivot] + a2[pivot];

        for (int j = 0; j < pivot; j++) {
            path_cost += max(a1[j], a2[j]);
        }

        for (int j = pivot + 1; j < n; j++) {
            path_cost += max(a1[j], a2[j]);
        }

        result = max(result, path_cost);
    }

    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}