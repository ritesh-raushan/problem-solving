#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int maxi = 0;

    while(n--) {
        int ai, bi;
        cin >> ai >> bi;
        sum += -ai + bi;
        if (maxi < sum) maxi = sum;
    }
    cout << maxi;

    return 0;
}