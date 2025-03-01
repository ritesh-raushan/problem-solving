#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    int q;
    cin >> q;

    auto is_1100 = [&](int i) {
        if(i < 0 || i + 3 >= n) return false;
        return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
    };

    int count = 0;
    for(int i = 0; i <= n - 4; i++) {
        if(is_1100(i)) count++;
    }

    while(q--) {
        int i, v;
        cin >> i >> v;
        i--;

        for(int j = i - 3; j <= i; j++) {
            if(is_1100(j)) count--;
        }

        s[i] = v + '0';

        for(int j = i - 3; j <= i; j++) {
            if(is_1100(j)) count++;
        }

        if(count > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
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
