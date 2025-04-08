#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool checkPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;

    if (k == 1) {
        if(checkPrime(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else {
        if(x != 1) cout << "NO" << endl;
        else {
            if(k == 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
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