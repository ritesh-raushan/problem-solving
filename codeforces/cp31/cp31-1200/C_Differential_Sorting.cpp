#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a) cin>>x;
    if(a[n-1]<0) {
        int flag = true;
        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag) cout << 0 << endl;
        else cout << -1 << endl;
    } else {
		if(a[n-1]<a[n-2]){
			cout << -1 <<endl;
		}
		else{
			cout << n-2 << endl;
			for(int i=n-3; i>=0; i--){
				cout << i+1 << ' ' << n-1 << ' ' << n << endl;
			}
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