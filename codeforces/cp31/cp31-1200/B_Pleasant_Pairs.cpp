#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int count = 0;
    for(int i = 1; i <= n; i++) {
        int curr = a[i];
        for(int k = 1; k <= 2 * n / curr; k++) {
            int j = curr * k - i;
            if(j > i && j <= n && a[j] == k) {
                count++;
            }
        }
    }
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}