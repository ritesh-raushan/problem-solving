#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>o;
    int odd=0, evens=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x%2 == 0) evens += x;
        else {
            odd++;
            o.push_back(x);
        }
    }
    int ce = o.size()/2+o.size()%2;
    
    if(odd==0){
        cout << 0 << endl;
        return;
    }
    sort(o.rbegin(), o.rend());
    // bool f=true;
    for(int i=0; i<ce; i++){
        
            evens += o[i];
            
    }
    cout << evens << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}