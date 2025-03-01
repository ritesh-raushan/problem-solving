#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<vector<int>> arr;

    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    int count = 0;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) count += 2; 
            else if(arr[i][0] == arr[j][1] || arr[i][1] == arr[j][0]) count += 1;
        }
    }

    cout << count << endl;

    return 0;
}