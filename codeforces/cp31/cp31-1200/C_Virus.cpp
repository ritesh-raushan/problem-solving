#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    vector<int> diff;
    diff.push_back(a[0]-1+n-a[m-1]);
    for(int i=1;i<m;i++){
        diff.push_back(a[i]-a[i-1]-1);
    }
    sort(diff.rbegin(),diff.rend());
    int i=0;
    int cnt=0;
    for(int x:diff){
        if(x-i>0){
            if(x-i>1){
                cnt+=x-i-1;
            }else cnt+=1;
            i+=4;
        }
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