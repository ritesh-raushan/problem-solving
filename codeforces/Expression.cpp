#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int exp1 = a + b + c;
    int exp2 = a * b * c;
    int exp3 = a + (b*c);
    int exp4 = a * (b+c);
    int exp5 = (a+b) * c;
    int exp6 = (a*b) + c;
    int max1 = max(exp1, exp2);
    int max2 = max(exp3, exp4);
    int max3 = max(exp5, exp6);
    int res = max(max(max1, max2), max3);
    cout << res;

    return 0;
}