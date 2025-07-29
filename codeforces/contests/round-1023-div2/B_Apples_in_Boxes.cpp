#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int mini = *min_element(a.begin(), a.end());
    int maxi = *max_element(a.begin(), a.end());
    int sum = accumulate(a.begin(), a.end(), 0LL);

    int counti = count(a.begin(), a.end(), maxi);

    if(maxi - mini > k + 1 || (maxi - mini == k + 1 && counti > 1)) {
        cout << "Jerry" << endl;
        return;
    }

    if(sum % 2 == 0) cout << "Jerry" << endl;
    else cout << "Tom" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}