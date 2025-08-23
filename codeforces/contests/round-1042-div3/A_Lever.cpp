#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n), b(n);
    for(auto&x:a)cin>>x;
    for(auto&x:b)cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i])count+=a[i]-b[i];
    }
    cout<<count+1<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}