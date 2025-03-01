#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> charVector;
    vector<int> intVector;

    for (int i = 0; i < s.size(); i++){
        if (s[i] != '+') {
            charVector.push_back(s[i]);
        }
    }

    for (char ch : charVector){
        intVector.push_back(ch - '0');
    }

    sort(intVector.begin(), intVector.end());

    for (int i = 0; i < intVector.size(); i++){
        cout << intVector[i];
        if (i < intVector.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}
