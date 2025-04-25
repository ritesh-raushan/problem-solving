#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a, s;
    cin >> a >> s;
    vector<int> b;

    while(s) {
        int x = a % 10;
        int y = s % 10;

        if(x <= y) {
            b.push_back(y - x);
        } else {
            s /= 10;
            y += 10 * (s % 10);

            if(x < y && y >= 10 && y <= 19) {
                b.push_back(y - x);
            } else {
                cout << -1 << endl;
                return;
            }
        }

        a /= 10;
        s /= 10;
    }

    if(a) {
        cout << -1 << endl;
    } else {
        while(!b.empty() && b[b.size() - 1] == 0) {
            b.pop_back();
        }
        for(int i = b.size() - 1; i >= 0; i--) {
            cout << b[i];
        }
        cout << endl;
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