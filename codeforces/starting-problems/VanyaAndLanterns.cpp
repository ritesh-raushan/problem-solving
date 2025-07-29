#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    double maxDiff = 0;
    vector<int> position;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        position.push_back(t);
    }

    sort(position.begin(), position.end());

    for(int i = 1; i < n; i++){
        int diff = (position[i] - position[i-1]);
        if(diff > maxDiff) maxDiff = diff;
    }

    double start = position[0];
    double end = l - position[n-1];
    double mean = maxDiff / 2;
    cout << fixed << setprecision(9) << max(start, max(end, mean));

    return 0;
}