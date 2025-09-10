#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    for(int i=0; i<n; i++){
        int x = a[i];
        cout << x + (x % (k+1)) * k;
        if(i == n-1) cout << endl;
        else cout << ' ';
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