#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int prod = 1;
        if(s[0] == '0') prod = 0;
        else if(s[0] == '?') prod *= 9;

        for(int i = 1; i < s.size(); i++){
            if(s[i] == '?') prod *= 10;
            else prod *= 1;
        }
        cout << prod << endl;
    }

    return 0;
}