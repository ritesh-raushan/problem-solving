#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    bool hard = false;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        nums.push_back(t);
    }
    for(int i = 0; i < n; i++){
        if(nums[i] == 1) hard = true;
    }
    if(hard) cout << "HARD" << endl;
    else cout << "EASY" << endl;

    return 0;
}