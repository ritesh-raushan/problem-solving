#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int count = 0;
    bool swapPair = false;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == i) {
            count++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] != i && v[v[i]] == i) {
            swapPair = true;
            break;
        }
    }

    if (swapPair) {
        cout << count + 2 << endl;
    } else if (count < n) {
        cout << count + 1 << endl;
    } else {
        cout << count;
    }

    return 0;
}
