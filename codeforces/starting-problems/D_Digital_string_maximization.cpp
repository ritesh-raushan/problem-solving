#include <bits/stdc++.h>
using namespace std;

bool descending(vector<int>& nums) {
    for (size_t i = 0; i < nums.size() - 1; i++) { // Use size_t for the loop counter
        if (nums[i] <= nums[i + 1]) { 
            return false;
        }
    }
    return true; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<int> nums;
        for (char ch : s) {
            nums.push_back(ch - '0');
        }

        while (!descending(nums)) {
            bool swapped = false; 
            for (size_t i = 0; i < nums.size() - 1; i++) { // Use size_t here
                if (nums[i + 1] - 1 > nums[i]) { 
                    nums[i + 1]--;
                    swap(nums[i + 1], nums[i]);
                    swapped = true;
                }
            }
            if (!swapped) break;
        } 
        for (size_t i = 0; i < nums.size(); i++) { // Use size_t here
            cout << nums[i];
        }
        cout << endl;
    }

    return 0;
}
