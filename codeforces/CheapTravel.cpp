#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >>b;

    int oneOnly = n*a;
    int totalSum = 0;
    int sum1 = 0;
    int sum2 = 0;

    int div = n / m;
    sum1 += div * b;

    int rem = n % m;
    sum2 += min(rem * a, b);

    totalSum = sum1 + sum2;

    cout << min(oneOnly,totalSum);

    return 0;
}