#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool onlyupper = true;
    bool flrestupper = islower(s[0]);

    for(int i = 1; i < s.size(); i++) {
        if(islower(s[i])) {
            onlyupper = false;
            flrestupper = false;
            break;
        }
    }

    if(onlyupper || flrestupper) {
        for(int i = 0; i < s.size(); i++) {
            if(islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}
