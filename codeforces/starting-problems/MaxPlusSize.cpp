#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<int> even;
        for(int i = 0; i < n; i += 2) {
            even.push_back(arr[i]);
        }
        int maxEven = even.empty() ? 0 : *max_element(even.begin(), even.end());
        int scoreEven = maxEven + even.size();
        
        vector<int> odd;
        for(int i = 1; i < n; i += 2) {
            odd.push_back(arr[i]);
        }
        int maxOdd = odd.empty() ? 0 : *max_element(odd.begin(), odd.end());
        int scoreOdd = maxOdd + odd.size();
        
        int res = max(scoreEven, scoreOdd);
        cout << res << endl;
    }
    
    return 0;
}
