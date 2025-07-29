#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int k;
        cin >> k;

        vector<int> nums(k);
        for(int i = 0; i < k; i++) {
            cin >> nums[i];
        }

        unordered_map<int, int> freq;

        for(int i = 0; i < k; i++) {
            int a = (k - 2) / nums[i];
            if((k - 2) % nums[i] == 0 && freq[a] > 0) {
                cout << nums[i] << " " << a << endl;
                break;
            }

            freq[nums[i]]++;
        }
    }

    return 0;
}