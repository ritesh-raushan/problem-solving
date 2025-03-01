#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    while(n--) {
        int pi, qi;
        cin >> pi >> qi;
        if (qi - pi >= 2) count += 1;
    }
    cout << count;

    return 0;
}