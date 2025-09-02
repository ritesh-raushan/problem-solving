#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    pair<int,int> last = {a[0]-1, 1};
    for(auto&val:mp) {
        if(val.first - last.first != 1) {
            cnt += val.second;
        } else if(val.second - last.second > 0) {
            cnt += val.second - last.second;
        }
        last = val;
    }
    cout << cnt+1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}