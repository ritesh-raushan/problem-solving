#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin>>n>>x;
    string s;
    cin>>s;
    x--;
    int lw=-1;
    int rw=n;
    for(int i=0;i<x;i++){
        if(s[i]=='#'){
            lw = i;
            // break;
        }
    }
    for(int i=x+1;i<n;i++){
        if(s[i]=='#'){
            rw = i;
            break;
        }
    }
    int ans;
    if((lw+1)>(n-rw)){
        ans=min(lw+1,n-1-x)+1;
    }else{
        ans=min(x,n-rw)+1;
    }
    cout<<ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}