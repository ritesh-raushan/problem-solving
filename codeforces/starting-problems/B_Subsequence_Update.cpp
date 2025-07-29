#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = r - l + 1;

    vector<int> left(a.begin(), a.begin() + r);
    sort(left.begin(), left.end());
    
    int leftSum = 0;
    for(int i = 0; i < x; i++) {
        leftSum += left[i];
    }

    vector<int> right(a.begin() + l - 1, a.end());
    sort(right.begin(), right.end());

    int rightSum = 0;
    for(int i = 0; i < x; i++) {
        rightSum += right[i];
    }

    cout << min(leftSum, rightSum) << endl;
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