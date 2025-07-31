#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int>a(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    int d = s - sum;

    if(d < 0) {
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    if(d == 1) {
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) c0++;
            else if(a[i] == 1) c1++;
            else c2++;
        }
        
        for(int i = 0; i < c0; i++) cout << 0 << " ";
        for(int i = 0; i < c2; i++) cout << 2 << " ";
        for(int i = 0; i < c1; i++) cout << 1 << " ";
        cout << endl;
        return;
    }

    cout << -1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}