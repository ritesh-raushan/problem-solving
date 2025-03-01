#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> se(s.begin(), s.end());
    int n = se.size();
    // cout << n << endl;
    if(n % 2 == 0){
        cout << "CHAT WITH HER!";
    } else{
        cout << "IGNORE HIM!";
    }
    
    return 0;
}