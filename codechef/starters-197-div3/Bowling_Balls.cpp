#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x, y;
	cin >> n >> x >> y;
	vector<int> a(n);
	int count = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i : a) {
        if(i >= x && i <= y) count++;
	}
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}