#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    
    vector<int> a = {a1, a2};
    vector<int> b = {b1, b2};
    
    int wins = 0;
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            int suneet = 0;
            int slavic = 0;
            
            // First round
            if(a[i] > b[j]) {
                suneet++;
            } else if(b[j] > a[i]) {
                slavic++;
            }
            
            // Second round
            if(a[1 - i] > b[1 - j]) {
                suneet++;
            } else if(b[1 - j] > a[1 - i]) {
                slavic++;
            }
            
            if(suneet > slavic) {
                wins++;
            }
        }
    }
    
    cout << wins << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}