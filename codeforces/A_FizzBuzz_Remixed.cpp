#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    int count = n / 15 * 3;
    int rem = n % 15;
    
    if(rem >= 0) count += 1;
    if(rem >= 1) count += 1;
    if(rem >= 2) count += 1;
    
    cout << count << endl;
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