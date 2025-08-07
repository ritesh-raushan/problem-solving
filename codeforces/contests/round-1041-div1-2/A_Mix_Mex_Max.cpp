#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for(int &x:a)cin >> x;
    for(int i=0;i<n;i++){
        if(a[i]!=-1)s.insert(a[i]);
    }
    if(s.size()>1) {
        cout<<"NO"<<endl;
        return;
    }
    if(s.empty()) {
        cout<<"YES"<< endl;
        return;
    }
    int k=*s.begin();
    if(k==0) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
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