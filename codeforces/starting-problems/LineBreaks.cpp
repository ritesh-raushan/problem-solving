#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int totalLength = 0;
        int maxWords = 0;

        for(int i = 0; i < n; ++i) {
            if(totalLength + static_cast<int>(words[i].length()) <= m) {
                totalLength += static_cast<int>(words[i].length());
                maxWords++;
            } else {
                break;
            }
        }

        cout << maxWords << endl;
    }

    return 0;
}
