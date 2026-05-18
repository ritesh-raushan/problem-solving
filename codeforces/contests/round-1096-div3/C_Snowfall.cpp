#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int check(int n){
    if(n %2 == 0 && n%3 != 0) return 1;
    else if(n %3 == 0 && n%2 != 0) return 2;
    else if(n %2 == 0 && n%3 == 0) return 3;
    else return 4;
}

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    vector<int>a, b, c, d;
    for(int i=0; i<n; i++){
        if(check(v[i]) == 1) b.push_back(v[i]);
        else if(check(v[i]) == 2) d.push_back(v[i]);
        else if(check(v[i]) == 3) a.push_back(v[i]);
        else c.push_back(v[i]);
    }
    for(int i=0; i<a.size(); i++) cout << a[i] << " ";
    for(int i=0; i<b.size(); i++) cout << b[i] << " ";
    for(int i=0; i<c.size(); i++) cout << c[i] << " ";
    for(int i=0; i<d.size(); i++) cout << d[i] << " ";
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}