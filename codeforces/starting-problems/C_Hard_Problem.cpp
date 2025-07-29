#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long seated1 = min(m, a);
        long long seated2 = min(m, b);

        long long remaining1 = m - seated1;
        long long remaining2 = m - seated2;

        long long nPreference = min(c, remaining1 + remaining2);

        long long res = seated1 + seated2 + nPreference;

        cout << res << endl;
    }

    return 0;
}
