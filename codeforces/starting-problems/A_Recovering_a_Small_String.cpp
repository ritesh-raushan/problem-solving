#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int c = 3;
    string s = "aaa";
    for(int i = 2; i >= 0; i--) {
        while(s[i] < 'z' && c < n) {
            s[i]++;
            c++;
        }
        if(c == n) {
            break;
        }
    }
    cout << s << endl;
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