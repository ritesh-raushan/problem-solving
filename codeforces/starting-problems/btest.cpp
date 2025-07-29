#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);
    set<int> s;
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        p[i] = {l, r};
        if (l == r) {
            s.insert(l);
            freq[l]++;
        }
    }

    vector<int> fixed_vals(s.begin(), s.end());

    string result;

    for (auto& v : p) {
        int l = v.first, r = v.second;

        if (l != r) {
            auto it_l = lower_bound(fixed_vals.begin(), fixed_vals.end(), l);
            auto it_r = upper_bound(fixed_vals.begin(), fixed_vals.end(), r);

            if (it_r - it_l < (r - l + 1)) {
                result += '1';
            } else {
                result += '0';
            }
        } else {
            if (freq[l] == 1) {
                result += '1';
            } else {
                result += '0';
            }
        }
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