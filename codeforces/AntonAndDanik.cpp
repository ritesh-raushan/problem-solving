#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int dcount = 0;
    int acount = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A') acount++;
        else if(s[i] == 'D') dcount++;
    }

    if(acount > dcount) cout << "Anton";
    else if(dcount > acount) cout << "Danik";
    else cout << "Friendship";

    return 0;
}