#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(auto&x:a)cin>>x;
    for(auto&x:b)cin>>x;
    for(auto&x:c)cin>>x;
    vector<pair<int,int>>a1(n),a2(n),a3(n);
    for(int i=0;i<n;i++){
        a1[i]={a[i],i};
        a2[i]={b[i],i};
        a3[i]={c[i],i};
    }
    sort(a1.rbegin(),a1.rend());
    sort(a2.rbegin(),a2.rend());
    sort(a3.rbegin(),a3.rend());
    int res=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                int d1=a1[i].second;
                int d2=a2[j].second;
                int d3=a3[k].second;
                if(d1!=d2 && d1!=d3 && d2!=d3){
                    res=max(res,a1[i].first+a2[j].first+a3[k].first);
                }
            }
        }
    }
    cout<<res<<endl; 
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}