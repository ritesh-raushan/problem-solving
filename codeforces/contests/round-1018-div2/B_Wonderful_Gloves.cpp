#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> l(n);
    vector<int> r(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    for(int i = 0; i < n; i++) cin >> r[i];
    
    vector<int> minVal;
    int maxiSum = 0;
    for(int i = 0; i < n; i++) {
        maxiSum += max(l[i], r[i]);

        int mini = min(l[i], r[i]);
        minVal.push_back(mini);
    }

    sort(minVal.rbegin(), minVal.rend());
    
    int miniSum = 0;
    for(int i = 0; i < k-1; i++) {
        miniSum += minVal[i];
    }
    
    cout << maxiSum + miniSum + 1 << endl;
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