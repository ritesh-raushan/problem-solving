#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s, t;
    cin >> s >> t;

    vector<int> count(26, 0);
    for (char c : t) count[c - 'a']++;
    for (char c : s) count[c - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (count[i] < 0) {
            cout << "Impossible" << endl;
            return;
        }
    }

    string nt = "";
    for (int i = 0; i < 26; i++) {
        nt += string(count[i], (char)('a' + i));
    }

    int n = s.length();
    vector<bool> s_priority(n, false);
    
    char next_diff = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (i < n - 1 && s[i] != s[i+1]) {
            next_diff = s[i+1];
        }
        
        if (next_diff != 0 && next_diff < s[i]) {
            s_priority[i] = true;
        } else {
            s_priority[i] = false;
        }
    }

    string result = "";
    int i = 0;
    int j = 0;
    
    while (i < nt.length() && j < s.length()) {
        if (nt[i] < s[j]) {
            result += nt[i++];
        } else if (s[j] < nt[i]) {
            result += s[j++];
        } else {
            if (s_priority[j]) {
                result += s[j++];
            } else {
                result += nt[i++];
            }
        }
    }

    while (j < s.length()) result += s[j++];
    while (i < nt.length()) result += nt[i++];

    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}