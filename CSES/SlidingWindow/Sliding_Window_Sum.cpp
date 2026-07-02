#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    int x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<int>nums(n);
    nums[0]=x;
    for(int i = 1; i<n; i++){
        nums[i] = (a*nums[i-1]+b)%c;
    }
    int sum = 0;
    int p=0, q=0;
    int ans = 0;
    while(q < n){
        sum += nums[q];
        if(q-p+1 < k) q++;
        else if(q-p+1 == k){
            ans ^= sum;
            sum -= nums[p];
            p++; q++;
        }
    }
    cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    while(t--) solve();
    return 0;
}