#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mini = *min_element(a.begin(), a.end());
    int maxi = *max_element(a.begin(), a.end());
    
    if(mini == maxi) {
        cout << "No" << endl;
        return;
    }
    
    int temp = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] == maxi) {
            temp = i;
            break;
        }
    }
    
    cout << "Yes" << endl;
    for(int i = 0; i < n; i++) {
        if(i == temp) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}