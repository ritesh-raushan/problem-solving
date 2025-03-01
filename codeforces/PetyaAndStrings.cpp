#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    vector<char> str1;
    vector<char> str2;
    // int sum1 = 0;
    // int sum2 = 0;
    for(int i = 0; i < a.size(); i++){
        // sum1 += int(tolower(a[i]));
        str1.push_back(tolower(a[i]));
    }
    for(int  j= 0; j < b.size(); j++){
        // sum2 += int(tolower(b[j]));
        str2.push_back(tolower(b[j]));
    }
    if(str1 < str2) cout << -1;
    else if(str1 > str2) cout << 1;
    else cout << 0;
}