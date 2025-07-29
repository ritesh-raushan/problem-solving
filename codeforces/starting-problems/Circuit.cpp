#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int l;
        cin >> l;

        vector<int> switches(2 * l);
        for(int i = 0; i < 2 * l; i++) {
            cin >> switches[i];
        }

        int zeroCount = 0, oneCount = 0, mini = 0, maxi = 0;

        for(int i = 0; i < switches.size(); i++) {
            if(switches[i] == 0) zeroCount++;
            else oneCount++;
        }

        maxi = min(zeroCount, oneCount);
        if(zeroCount % 2 == 0 && oneCount % 2 == 0) mini = 0;
        else mini = 1;

        cout << mini << " " << maxi << endl;
    }
    return 0;
}