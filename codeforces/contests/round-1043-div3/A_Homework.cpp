#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,m; 
    string a,b,c;
    cin>>n>>a>>m>>b>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='D') a+=b[i];
        else {
            char ch=b[i];
            a=ch+a;
        }
    }
    cout<<a<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}