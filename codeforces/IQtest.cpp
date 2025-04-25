#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums;

    int evenCount = 0;
    int oddCount = 0;
    int res = -1;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(t % 2 == 0) evenCount++;
        else oddCount++;
        nums.push_back(t);
    }

    if(oddCount > evenCount) {
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0) {
                res = i + 1;
            }
        }
    } else if(evenCount > oddCount) {
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0) {
                res = i + 1;
            }
        }
    }
    cout << res << endl;

    return 0;
}