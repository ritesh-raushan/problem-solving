#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        swap(a[1], a[n-1]);

        int maxScore = 0;
        int currentMin = a[0];
        int currentMax = a[0];

        for (int i = 0; i < n; ++i) {
            currentMin = min(currentMin, a[i]);
            currentMax = max(currentMax, a[i]);
            maxScore += (currentMax - currentMin);
        }

        cout << maxScore << endl;
    }

    return 0;
}
