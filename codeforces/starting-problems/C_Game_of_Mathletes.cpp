#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int score = 0;
    int l = 0; 
    int r = n - 1;

    while(l < r) {
        if(nums[l] + nums[r] == k) {
            score++;
            l++;
            r--;
        } else if(nums[l] + nums[r] < k) {
            l++;
        } else {
            r--;
        }
    }

    cout << score << endl;
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