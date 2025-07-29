#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int i = 1, ans = 1;
        while(i < n) {
            i = i * 2 + 2;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}