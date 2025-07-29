#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long luckyCount = 0;
    vector<long long> v;
    string str = to_string(n);

    for (char ch : str) {
        v.push_back(ch - '0');
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 4 || v[i] == 7) {
            luckyCount += 1;
        }
    }

    if (luckyCount == 4 || luckyCount == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
