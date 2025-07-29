#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    
    vector<int> freq(10, 0);
    for (char c : s) {
        freq[c - '0']++;
    }
    
    string res;
    for(int i = 0; i < 10; i++) {
        int mini = 10 - (i + 1);
        for (int j = mini; j < 10; j++) {
            if (freq[j] > 0) {
                res += (j + '0');
                freq[j]--;
                break;
            }
        }
    }
    
    cout << res << endl;
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