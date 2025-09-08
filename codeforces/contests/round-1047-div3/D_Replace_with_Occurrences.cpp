#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>b(n);
    map<int, int> f;
    for(int i=0; i<n; i++) {
        cin>>b[i];
        f[b[i]]++;
    }
    bool flag = true;
    map<int, int> mp;
    int num = 0;
    for(auto&x:f) {
        if(x.second % x.first != 0) {
            flag = false;
            break;
        }
        mp[x.first] = num;
        num += x.second / x.first;
        x.second += x.first - 1;
    }
    if(!flag) {
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n; i++) {
        int k = b[i];
        cout << mp[k] + (f[k] / k);
        if (i < n - 1) cout << " ";
        else cout << endl;
        f[k]--;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}       