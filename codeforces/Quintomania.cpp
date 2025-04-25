#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> tones(n);

        for(int i = 0; i < n; i++) {
            cin >> tones[i];
        }

        bool perfect = true;

        for(int i = 1; i < n; i++) {
            int diff = abs(tones[i] - tones[i-1]);
            if(diff != 5 && diff != 7) {
                perfect = false;
                break;
            }
        }

        if(perfect) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}