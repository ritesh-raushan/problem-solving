#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int x;
    cin >> x;
    
    string s = to_string(x);
    
    vector<int> v;
    for(int i = 0; i < s.size(); i++) {
        v.push_back(s[i] - '0');
    }

    int mini = *min_element(v.begin(), v.end());

    cout << mini << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}