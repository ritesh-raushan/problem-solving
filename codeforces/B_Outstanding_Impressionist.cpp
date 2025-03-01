#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    const int MAX_V = 400005;
    vector<int> count_v(MAX_V, 0);
    
    vector<pair<int, int>> ranges(n);
    for (auto &p : ranges) {
        cin >> p.first >> p.second;
    }
    
    unordered_map<int, int> freq_fixed;
    for (auto &p : ranges) {
        if (p.first == p.second) {
            freq_fixed[p.first]++;
        }
    }
    
    vector<int> unique_fixed;
    unique_fixed.reserve(freq_fixed.size());
    for (auto &[v, cnt] : freq_fixed) {
        unique_fixed.push_back(v);
        count_v[v] += cnt;
    }
    
    sort(unique_fixed.begin(), unique_fixed.end());
    
    string s = "";
    s.reserve(n);
    for (int i = 0; i < n; i++) {
        int li = ranges[i].first;
        int ri = ranges[i].second;
        
        if (li < ri) {
            int lower = lower_bound(unique_fixed.begin(), unique_fixed.end(), li) - unique_fixed.begin();
            int upper = upper_bound(unique_fixed.begin(), unique_fixed.end(), ri) - unique_fixed.begin();
            int num_fixed = upper - lower;
            int size = ri - li + 1;
            
            if (num_fixed < size) {
                s += '1';
            } else {
                s += '0';
            }
        } else {
            int v = li;
            if (count_v[v] <= 1) {
                s += '1';
            } else {
                s += '0';
            }
        }
    }
    
    cout << s << "\n";
    
    for (auto &[v, cnt] : freq_fixed) {
        count_v[v] -= cnt;
    }
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