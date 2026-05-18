#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    vector<int>b(k);
    for(int&x:a) cin >> x;
    for(int&x:b) cin >> x;
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    int sum = accumulate(a.begin(), a.end(), 0LL);
    int temp = n, i = 0, j = 0;
    while(temp >= b[i] && i < k) {
        sum -= a[j + b[i] - 1];
        j += b[i];
        temp -= b[i];
        i++;
    }
    cout << sum << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}