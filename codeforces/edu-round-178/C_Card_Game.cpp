#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') a.push_back(i + 1);
        else b.push_back(i + 1);
    }

    bool alice = false;
    for(int x : a){
        bool bob = false;
        for(int y : b){
            if((x == 1 && 2 <= y && y <= n-1) || (x == n && y == 1) || (2 <= x && x <= n-1 && y > x)){
                bob = true;
                break;
            }
        }
        if(!bob){
            alice = true;
            break;
        }
    }

    if(alice) cout << "Alice" << endl;
    else cout << "Bob" << endl;
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
