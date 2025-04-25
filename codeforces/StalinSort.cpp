#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int ans = INT_MAX;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; ++i){
            int sum = i;
            for(int j = i + 1; j < n; j++) {
                if(a[j] > a[i]) sum++;
            }
            ans = min(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}