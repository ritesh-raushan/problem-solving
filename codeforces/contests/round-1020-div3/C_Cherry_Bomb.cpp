#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int amax = *max_element(a.begin(), a.end());
    int amin = *min_element(a.begin(), a.end());

    bool all = true;
    for(int i = 0; i < n; i++) {
        if(b[i] != -1) {
            all = false;
            break;
        }
    }

    if(all) {
        cout << ((amin + k) - amax + 1) << endl;
        return;
    }
    else {
        int sum = -1;
        for(int i = 0; i < n; i++) {
            if(b[i] != -1) {
                int temp = a[i] + b[i];
                if (sum == -1) sum = temp;
                else if (sum != temp) {
                    cout << 0 << endl;
                    return;
                }
            }
        }
        if(sum > (amin + k) || amax > sum) cout << 0 << endl;
        else cout << 1 << endl;
    }
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