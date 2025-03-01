#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<char> s;
        char t;
        for(int i = 0; i < 3; i++) {
            cin >> t;
            s.push_back(t);
        }
        int int1 = s[0] - '0';
        int int2 = s[2] - '0';

        if(int1 > int2) s[1] = '>';
        else if(int1 < int2) s[1] = '<';
        else s[1] = '=';

        for(int i = 0; i < s.size(); i++) {
            cout << s[i];
        }
        cout << endl;
    }
    
    return 0;
}