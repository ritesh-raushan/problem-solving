#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int singleCount = 0;
        for (auto& it : freq) {
            if (it.second == 1) singleCount++;
        }
        
        int ans = ((singleCount + 1) / 2) * 2 + freq.size() - singleCount;
        cout << ans << endl;
    }
    
    return 0;
}