#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << 2*st.size()-1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}