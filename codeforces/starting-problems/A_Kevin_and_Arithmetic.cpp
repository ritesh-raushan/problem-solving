#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] % 2 == 0) even++;
        else odd++;
    }
    
    if(even == 0) cout << odd - 1 << endl;
    else cout << odd + 1 << endl;
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