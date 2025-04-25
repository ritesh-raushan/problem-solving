#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    unordered_set<int> used;
    queue<int> unused;
    for (int i = 1; i <= n; ++i) {
        unused.push(i);
    }

    for (int i = 0; i < n; i++) {
        int current = a[i];

        if (used.find(current) == used.end()) {
            b[i] = current;
            used.insert(current);
        } else {
            while (!unused.empty() && used.find(unused.front()) != used.end()) {
                unused.pop();
            }
            b[i] = unused.front();
            used.insert(b[i]);
            unused.pop();
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
