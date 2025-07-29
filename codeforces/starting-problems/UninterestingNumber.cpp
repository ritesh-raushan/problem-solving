#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        string num;
        cin >> num;

        long long totalSum = 0, count2 = 0, count3 = 0;
        for (char c : num) {
            long long digit = c - '0';
            totalSum += digit;
            if (digit == 2) count2++;
            if (digit == 3) count3++;
        }

        long long remainderTarget = (-totalSum) % 9;
        if (remainderTarget < 0) remainderTarget += 9;

        bool possible = false;

        for (long long b = 0; b <= 2 && b <= count3; b++) {
            long long temp = remainderTarget - 6 * b;
            long long r = (5 * temp) % 9;
            if (r < 0) r += 9;
            if (r <= count2) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << " NO" << endl;
        }
    }

    return 0;
}
