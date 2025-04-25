#include<bits/stdc++.h>
using namespace std;

int main(){
    string w;
    int t;
    cin >> t;
    while(t--){
        cin >> w;
        if(w.size() <= 10){
            cout << w << endl;
        }
        else{
            cout << w[0] << (w.size() - 2) << w[w.size()-1] << endl;
        }
    }

    return 0;
}