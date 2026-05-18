#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;
    vector<int> idxa, idxb;
    for(int i=0; i<n; i++) {
        if(s[i] == 'a') idxa.push_back(i);
        else idxb.push_back(i);
    }
    int a = idxa.size();
    int b = idxb.size();
    int costa = 0, costb = 0;
    if(a>0) {
        vector<int>v(a);
        for(int i=0; i< a; i++) v[i] = idxa[i]-i;
        int mid = v[a/2];
        for(int x:v) costa += abs(x-mid);
    }
    if(b>0) {
        vector<int>v(b);
        for(int i=0; i< b; i++) v[i] = idxb[i]-i;
        int mid = v[b/2];
        for(int x:v) costb += abs(x-mid);
    }
    cout << min(costa, costb) << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}