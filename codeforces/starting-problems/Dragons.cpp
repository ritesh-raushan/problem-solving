#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s, n; 
    cin >> s >> n;

    vector<pair<long long, long long>> dragons(n);

    for(int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for(int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
