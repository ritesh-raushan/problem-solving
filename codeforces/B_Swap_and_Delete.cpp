#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.length();

        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        int need0 = 0, need1 = 0, ans = n;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') need1++;
            else need0++;

            if (count0 >= need0 && count1 >= need1) {
                ans = min(ans, n - 1 - i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}