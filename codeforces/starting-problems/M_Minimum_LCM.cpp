#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, mod2 = 998244353, inf = 1e18;
void solve() {
    int n;
    cin >> n;
    int a = 0;
    bool zero = false;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            a = i;
            zero = true;
            break;
        }
    }
    if(zero){
        cout << n / a << " " << n - (n / a) << endl;
    }
    else {
        cout << 1 << " " << n-1 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}