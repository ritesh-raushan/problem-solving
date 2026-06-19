// First Negative Number in every window of size K.

/*

Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

Example:

Input:

5 2
-8 2 3 -6 10

8 3
12 -1 -7 8 -15 30 16 28

Output:
-8 0 -6 -6
-1 -1 -7 -15 -15 0

*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto&x:a) cin >> x;

    int i=0, j=0; // initialize i and j pointer.
    queue<int>q; // store all the neg number in this queue.
    
    while(j <n){
        if(a[j] < 0) q.push(a[j]);
        if(j-i+1 < k) j++;
        else if(j-i+1 == k){
            if(q.empty()) cout << 0 << " "; // if the queue is empty print 0
            else{
                cout << q.front() << " "; // print first element of q if its not empty
                if(a[i] == q.front()) q.pop(); 
            }
            i++; j++; // slide the window
        }
    }
}