#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if((s[i] != 'A') && (s[i] != 'a') && (s[i] != 'E') && (s[i] != 'e') &&
        (s[i] != 'I') && (s[i] != 'i') && (s[i] != 'O') && (s[i] != 'o') &&
        (s[i] != 'U') && (s[i] != 'u') && (s[i] != 'Y') && (s[i] != 'y')) {
            cout << '.' << char(tolower(s[i]));
        }
    }

    return 0;
}
