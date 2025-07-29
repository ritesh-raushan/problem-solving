#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool found = false;

        for (int i = 0; i < n; i++) {
            bool win = true;

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                int sub = abs(nums[i] - nums[j]);
                if (sub % k == 0) {
                    win = false;
                    break;
                }
            }

            if (win) {
                cout << "YES" << endl;
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
