#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MAXN = 10000001;
bool isPrime[MAXN];

void sieve() {
    fill(isPrime, isPrime + MAXN, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            count += n / i;
        }
    }
    
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    sieve();

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
