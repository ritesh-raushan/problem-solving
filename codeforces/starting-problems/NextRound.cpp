#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, val;
    cin >> n >> k;
    int count = 0;
    vector<int> myVector;
    for(int i = 0; i < n; i++){
        cin >> val;
        myVector.push_back(val);
    }
    int key =  myVector[k-1];
    for(int i = 0; i < n; i++){
        if((myVector[i] >= key) && myVector[i] > 0){
            count += 1;
        }
    }
    cout << count;

    return 0;
}