#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int n2 = n * (n - 1) / 2;
    multiset<int> b;
    for(int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }

    vector<int> a;
    for(int i = n - 1; i >= 1; i--) {
        int x = *b.begin();
        a.push_back(x);
        for(int j = 0; j < i; j++) {
            b.erase(b.find(x));
        }
    }

    a.push_back(1e9);
    for (int x : a) cout << x << " ";
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}