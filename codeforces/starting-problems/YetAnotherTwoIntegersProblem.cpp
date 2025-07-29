#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;

        long long count = 0;

        if(a == b) {
            cout << count << endl;
        }
        else if(a < b) {
            long long diff = b-a;
            int div = diff/10;
            count += div;
            if(diff % 10 != 0) {
                count++;
            }
            cout << count << endl;
        }
        else {
            long long diff = a-b;
            int div = diff/10;
            count += div;
            if(diff % 10 != 0) {
                count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}