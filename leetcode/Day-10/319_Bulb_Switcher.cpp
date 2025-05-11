#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    int result = sol.bulbSwitch(n);
    cout << result << endl;
    return 0;
}