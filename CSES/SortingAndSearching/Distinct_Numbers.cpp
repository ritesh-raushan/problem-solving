#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    set<int> st;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size();
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}