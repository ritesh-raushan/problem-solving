#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, c;
    cin >> n >> c;
    string s;
    cin >> s;

    map<char, int> f;
    for (char ch : s) {
        f[ch]++;
    }

    int minCost = n * (n + 1) / 2;

    for (int m = 0; m < (1 << 5); m++) {
        int cost = 0;
        int done = 0;

        for(int i = 0; i < 5; ++i) {
            if(m & (1 << i)) {
                char lang = 'A' + i;
                cost += c;
                done += f[lang];
            }
        }

        int notdone = n - done;
        int tc = notdone * (notdone + 1) / 2;
        cost += tc;

        if(cost < minCost) {
            minCost = cost;
        }
    }

    cout << minCost << endl;
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