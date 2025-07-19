#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> diffCount;
    for(int i = 0; i < n; i++) {
        int diff = a[i] - (i + 1);
        diffCount[diff]++;
    }
    int sum = 0;
    for(const auto& x : diffCount) {
        int count = x.second;
        count--;
        sum += (count * (count + 1)) / 2;
    }
    cout << sum << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}