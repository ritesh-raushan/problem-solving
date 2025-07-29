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
    
    int total = accumulate(a.begin(), a.end(), 0LL);
    int low = total - y;
    int high = total - x;
    
    sort(a.begin(), a.end());
    
    int result = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int lowTarget = low - a[i];
        int highTarget = high - a[i];
        
        int l = lower_bound(a.begin() + i + 1, a.end(), lowTarget) - a.begin();
        int r = upper_bound(a.begin() + i + 1, a.end(), highTarget) - a.begin();
        
        result += (r - l);
    }
    
    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}