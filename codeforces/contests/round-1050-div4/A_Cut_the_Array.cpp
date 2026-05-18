#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    vector<int> pref(n+1, 0);
    for(int i=1; i<=n; i++) {
        pref[i] = (pref[i-1] + a[i]) % 3;
    }
    for(int l=1; l<=n-2; l++) {
        for(int r=l+1; r<=n-1; r++) {
            int s1 = pref[l];
            int s2 = (pref[r] - pref[l] + 3) % 3;
            int s3 = (pref[n] - pref[r] + 3) % 3;
            if((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                cout << l << " " << r << endl;
                return;
            }
        }
    }
    cout << "0 0" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}