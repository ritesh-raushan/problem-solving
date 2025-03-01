#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a;
    int res = 0;
    while(n--){
        cin >> a;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '+'){
                res++;
                break;
            }else if (a[i] == '-'){
                res--;
                break;
                };
        }
    }
    cout << res;

    return 0;
}