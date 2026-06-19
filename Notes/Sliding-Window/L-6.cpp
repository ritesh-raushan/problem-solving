// Maximum of all subarrays of size k
/*

Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example:

Input 1:
    A = [1, 3, -1, -3, 5, 3, 6, 7]
    B = 3
Output 1:
    C = [3, 3, 5, 5, 6, 7]

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto&x:a)cin >>x;
    int i=0, j=0;
    int maxi = INT_MIN;
    while(j<n){
        int curr = a[j];
        maxi = max(curr, maxi);
        if(j-i+1 < k) j++;
        else if(j-i+1 == k){
            cout << maxi << " ";
            i++; j++;
        }
    }
}