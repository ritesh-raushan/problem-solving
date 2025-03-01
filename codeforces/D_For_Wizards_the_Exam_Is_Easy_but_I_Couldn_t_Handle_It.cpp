#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int best = 0;
    int bestl = 0, bestr = 0;

    for(int l = 0; l < n; l++){
        int curr = 0;
        for(int r = l + 1; r < n; r++){
            if(a[r] > a[l]) curr += 1;
            else if (a[r] < a[l]) curr -= 1;
            if(curr < best){
                best = curr;
                bestl = l;
                bestr = r;
            }
        }
    }

    cout << bestl + 1 << " " << bestr + 1 << endl;
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