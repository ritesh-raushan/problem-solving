#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, z;
    cin >> n;
    int xsum = 0;
    int ysum = 0;
    int zsum = 0;
    while(n--){
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }
    // cout << xsum << " " << ysum << " " << zsum << " ";
    if(xsum == 0 && ysum == 0 && zsum == 0){
            cout << "YES";
        } else cout << "NO";

    return 0;
}