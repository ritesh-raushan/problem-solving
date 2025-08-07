#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto&x:a)cin>>x;
    if(n<=1){
        cout<<0<<endl;
        return;
    }
    sort(a.begin(),a.end());
    int cnt=1;
    int tmp=1;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]<=k) {
            tmp++;
        }else tmp = 1;
        cnt=max(cnt, tmp);
    }
    cout<<n-cnt<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}