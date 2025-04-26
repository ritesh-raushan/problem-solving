#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    bool win = false;
    
    for(auto &f : freq) {
        if (f.second >= 4) {
            win = true;
            break;
        }
    }
    
    vector<int> days;
    for(auto &f : freq) {
        days.push_back(f.first);
    }
    
    sort(days.begin(), days.end());
    
    int streak = 0;
    int prev = 0;
    
    for(auto day : days) {
        if(day != prev + 1) {
            streak = 0;
        }
        if(freq[day] >= 2) {
            streak++;
            if(streak >= 2) {
                win = true;
                break;
            }
        }
        prev = day;
    }
    
    if(win) cout << "Yes" << endl;
    else cout << "No" << endl;
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