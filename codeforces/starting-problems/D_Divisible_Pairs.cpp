#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Map to store remainder pairs
    map<pair<int, int>, int> remainder_count;

    int beautiful_pairs = 0;

    for (int i = 0; i < n; i++) {
        int mod_x = a[i] % x;
        int mod_y = a[i] % y;

        // Check for pairs satisfying the conditions
        int target_mod_x = (x - mod_x) % x;
        int target_mod_y = mod_y;

        beautiful_pairs += remainder_count[{target_mod_x, target_mod_y}];

        // Add current element's remainder pair to the map
        remainder_count[{mod_x, mod_y}]++;
    }

    cout << beautiful_pairs << endl;
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
