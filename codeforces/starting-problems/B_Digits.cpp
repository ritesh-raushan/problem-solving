#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, d;
    cin >> n >> d;

    vector<int> result = {1};

    if(n >= 3 || d % 3 == 0) result.push_back(3);
    if(d == 5) result.push_back(5);
    if(n >= 3 || (n == 2 && d == 7)) result.push_back(7);
    if(n >= 6) result.push_back(9);
    else {
        int factorial = 1;
        for(int i = 2; i <= n; i++) factorial *= i;
        if((factorial * d) % 9 == 0) result.push_back(9);
    }

    for(int i = 0; i < result.size(); i++) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}