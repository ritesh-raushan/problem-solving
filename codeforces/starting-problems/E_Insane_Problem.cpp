#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        int count = 0;

        vector<int> exponents;
        int p = 1;
        while (p <= r2) {
            exponents.push_back(p);
            if (p > r2 / k) break;
            p *= k;
        }

        for (int i = 0; i < exponents.size(); i++) {
            int xMin = max(l1, (l2 + exponents[i] - 1) / exponents[i]);
            int xMax = min(r1, r2 / exponents[i]);

            if (xMin <= xMax) {
                count += (xMax - xMin + 1);
            }
        }

        cout << count << endl;
    }
    return 0;
}
