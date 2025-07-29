#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0){
            if((a[i] == '1')) cnt1++;
            if((b[i] == '0')) cnt2++;
        }
        else {
            if((a[i] == '1')) cnt3++;
            if((b[i] == '0')) cnt4++;
        }
    }
    if(cnt4 >= cnt1 && cnt2 >= cnt3) cout << "YES" << endl;
    else cout << "NO" << endl;
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