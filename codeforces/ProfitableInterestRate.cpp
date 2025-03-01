#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        long long a, b;
        cin >> a >> b;

        if (a >= b) {
            cout << a << endl;
        }
        else {
            long long x = b - a;
            if (x <= a){
                cout << a - x << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}