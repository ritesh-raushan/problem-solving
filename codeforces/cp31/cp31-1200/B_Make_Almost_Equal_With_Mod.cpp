#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int div=2;
    while(div>0){
        int ans=div;
        set<int>store;
        for(int i=0;i<n;i++){
            store.insert(a[i]%div);
        }
        if(store.size()==2){
            ans=div;
            cout<<ans<<endl;
            break;
        }
        store.clear();
        div*=2;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}