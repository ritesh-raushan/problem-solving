#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int lowerCount = 0;
    int upperCount = 0;
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) {
            upperCount++;
        }
        else if (islower(str[i])) {
            lowerCount++;
        }
    }
    if(lowerCount >= upperCount){
        for(int i = 0; i < str.size(); i++){
            cout << (char)tolower(str[i]);
        }
    }
    else{
        for(int i = 0; i < str.size(); i++){
            cout << (char)toupper(str[i]);
        }
    }

    return 0;
}