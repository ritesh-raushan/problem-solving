#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int findMex(int l, int r, int n, const vector<int>& a) {
    while(l>=0 && r < 2*n && a[l]==a[r]) {
        l--;
        r++;
    }
    l++;
    r--;
    vector<int> v(n+1, 0);
    for(int i=l; i<=r; i++) v[a[i]] = 1;
    int mex = 0;
    while(v[mex]) mex++;
    return mex;
}

void solve() {
    int n;
    cin >> n;
    vector<int>a(2*n);
    for(auto &i:a)cin >> i;
    int l=-1, r =-1;
    for(int i=0; i<2*n; i++){
        if(a[i]==0) {
            if(l == -1) l = i;
            else r = i;
        }
    }
    int ans = max({
        findMex(l, l, n, a), 
        findMex(r, r, n, a), 
        findMex((l+r) / 2, (l+ r+ 1) / 2, n, a)
    });
    
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}