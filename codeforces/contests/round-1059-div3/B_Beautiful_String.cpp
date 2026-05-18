#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>one;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '1') one.push_back(i+1);
    }
    cout << one.size() << endl;
    for(int i=0; i<one.size(); i++) {
        cout << one[i] << " ";
    }
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