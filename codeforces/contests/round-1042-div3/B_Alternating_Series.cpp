#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    for(int i=1; i<=n; i++) {
        if(i%2!=0)cout<<-1<<" ";
        else {
            if(i==n)cout<<2<<" ";
            else cout<<3<<" ";
        };
    }
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}