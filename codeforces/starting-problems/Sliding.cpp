#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long distance = 0;

    while(t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long distance = 0;

        distance += m - c;
        distance += (n-r) * (m-1);
        distance += (n-r) * m;

        cout << distance << endl;
    }

    return 0;
}