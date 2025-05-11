#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int oddSum = 0, evenSum = 0, ans = 0;
    vector<int> oddv;
    vector<int> evenv;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            evenv.push_back(a[i]);
            evenSum += a[i];
        }
        else {
            oddv.push_back(a[i]);
            oddSum += a[i];
        }
    }

    sort(oddv.begin(), oddv.end());
    sort(evenv.begin(), evenv.end());

    if(evenv.empty()) {
        ans = oddv.back();
    }
    else if(oddv.empty()) {
        ans = evenv.back();
    }
    else {
        int totalSum = evenSum + oddSum;
        ans = totalSum - (oddv.size() - 1);
    }

    cout << ans << endl;
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