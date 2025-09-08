#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    if((n-b)%2!=0)cout<<"NO"<<endl;
    else{
        if(a<=b) {
            cout << "YES" << endl;
        }else if(a>=b+2&&(n-a)%2==0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
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