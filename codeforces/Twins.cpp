#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins;
    int sum = 0;

    while(n--) {
        int a;
        cin >> a;
        sum += a;
        coins.push_back(a);
    }

    sort(coins.rbegin(), coins.rend());

    int curr = 0;
    int count = 0;
    int required = sum/2;

    for(int i = 0; i < coins.size(); i++) {
        curr += coins[i];
        count ++;
        if(curr > required) break;
    }
    cout << count;

    return 0;
}