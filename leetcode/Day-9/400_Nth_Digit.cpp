#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNthDigit(int n) {
        long long i = 1, count = 9, start = 1;
        while(n > i * count) {
            n -= i * count;
            count *= 10;
            start *= 10;
            i++;
        }
        long long num = start + (n - 1) / i;
        string s = to_string(num);
        return s[(n - 1) % i] - '0';
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    int result = sol.findNthDigit(n);
    cout << result << endl;
    return 0;
}