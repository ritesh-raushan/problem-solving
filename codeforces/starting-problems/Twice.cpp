#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int score = 0;
        vector<int> vec(n);

        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());
        for(int i = 1; i < n; i++) {
            if(vec[i] == vec[i - 1]) {
                score++;
                i++;
            }
        }
        cout << score << endl;
    }
    return 0;
}