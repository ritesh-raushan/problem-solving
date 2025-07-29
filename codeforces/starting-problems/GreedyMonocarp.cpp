#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> chests(n);
        for (int i = 0; i < n; i++) {
            cin >> chests[i];
        }

        sort(chests.rbegin(), chests.rend());

        long long sum = 0;
        bool resPrinted = false;

        for (int i = 0; i < n; i++) {
            sum += chests[i];
            if (sum > k) {
                sum -= chests[i];
                cout << k - sum << endl;
                resPrinted = true;
                break;
            }
        }

        if (!resPrinted) {
            cout << k - sum << endl;
        }
    }

    return 0;
}