#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> elements(n);
        long long sumAll = 0;

        for (int i = 0; i < n; ++i) {
            cin >> elements[i];
            sumAll += elements[i];
        }

        if (sumAll % n == 0) {
            long long k = sumAll / n;
            int oddPos = (n + 1) / 2;
            int evenPos = n / 2;

            long long sumOddPos = 0, sumEvenPos = 0;

            for (int i = 0; i < n; ++i) {
                if ((i + 1) % 2 == 1) {
                    sumOddPos += elements[i];
                } else {
                    sumEvenPos += elements[i];
                }
            }

            bool isOddSumValid = (sumOddPos == k * oddPos);
            bool isEvenSumValid = (sumEvenPos == k * evenPos);

            if (isOddSumValid && isEvenSumValid) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
