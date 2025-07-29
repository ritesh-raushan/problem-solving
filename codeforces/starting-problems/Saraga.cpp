#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int a = -1, b = -1;
    int n = s.size();
    int m = t.size();
    vector<int> sLastOcc(26, -1);

    for (int i = n - 1; i > 0; i--) {
        sLastOcc[s[i] - 'a'] = i;
    }

    for (int i = m - 2; i >= 0; i--) {
        if (sLastOcc[t[i] - 'a'] == -1) continue;
        if (a == -1 || (sLastOcc[t[i] - 'a'] + m - i < a + m - b)) {
            a = sLastOcc[t[i] - 'a'];
            b = i;
        }
    }

    if (a == -1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < a; i++) {
            cout << s[i];
        }
        for (int i = b; i < m; i++) {
            cout << t[i];
        }
        cout << endl;
    }

    return 0;
}