#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto&x:a) cin>>x;
    map<int, int>mp;
    for(int i=0; i<n; i++) mp[a[i]]++;
    for(auto&x:mp) {
        if(x.second % k != 0) {
            cout << 0 << endl;
            return;
        }
    }
    map<int, int> maxi;
    for(auto&x:mp) {
        maxi[x.first] = x.second / k;
    }
    map<int,int> sub;
    int l=0;
    int res=0;
    for(int r=0;r <n; r++) {
        sub[a[r]]++;
        while(sub[a[r]]> maxi[a[r]]) {
            sub[a[l]]--;
            l++;
        }
        if(l<=r) {
            res += (r-l+1);
        }
    }
    cout << res << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}