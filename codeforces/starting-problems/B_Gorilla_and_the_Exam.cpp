#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(k >= n) {
        cout << 1 << endl;
        return;
    }

    map<int, int> freq;
    for(int x : a) {
        freq[x]++;
    }

    int distinctCount = freq.size();

    vector<int> freqValues;
    for(auto& p : freq) {
        freqValues.push_back(p.second);
    }

    sort(freqValues.begin(), freqValues.end());

    for(int f : freqValues) {
        if(k >= f) {
            k -= f;
            distinctCount--;
        } else {
            break;
        }
    }

    cout << distinctCount << endl;
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