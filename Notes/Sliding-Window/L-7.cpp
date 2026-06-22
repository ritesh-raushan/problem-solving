// Variable size Sliding Window
// Largest Subarray of sum K.
/*

Problem Description:

Given an array containing N positive integers and an integer K. Your task is to find the length of the longest Sub-Array with sum of the elements equal to the given value K.

For Input:
7 5
4 1 1 1 2 3 5
your output is: 
4

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<int> a(n);
    for(auto&x:a) cin >> x;
    int i=0, j=0;
    int maxi = 0;
    int curr = 0, cnt=0;
    while(j < n){
        curr += a[j];
        while(curr > sum && i<=j) {
            curr -= a[i];
            i++;
        }
        if(curr == sum){
            maxi = max(maxi, j-i+1);
        }
        j++;
    }
    cout << maxi;
}

/*
================================================================================
 📝 REVISION NOTES: VARIABLE-SIZE SLIDING WINDOW (Longest Subarray Sum K)
================================================================================
 * Pattern: Dynamic Window (Expand right, Shrink left)
 * Time Complexity: O(N)  (Each element enters the sum once, leaves at most once)
 * Space Complexity: O(1) (Only tracking 4 standard integers)

 THE CORE PHILOSOPHY:
 "Greedily eat from the right until you choke; then burp from the left."
 
 The 4-step straight line: [ ADD -> SHRINK -> CHECK -> EXPAND ]

 THE TEMPLATE (Inside while(j < n)) :

 1. ADD (Incorporate a[j] into current state)
    curr += a[j];

 2. SHRINK (If you overshot the target K)
    while(curr > sum && i <= j) {
        curr -= a[i];
        i++;
    }

 3. CHECK (Did we hit the exact target?)
    if(curr == sum) {
        maxi = max(maxi, j - i + 1); // Current window length is (j - i + 1)
    }

 4. EXPAND (Move right pointer to next step)
    j++;


 ⚠️ CRITICAL INTERVIEW "GOTCHAS":

 1. Why a 'while' loop for shrinking, and not an 'if'?
    Imagine target = 5. Your window is [1, 1, 1] (sum=3). The next number is 10.
    The sum jumps to 13. A single 'if' statement would only kick out one '1' 
    (leaving sum=12). You MUST use a 'while' loop to keep kicking out left elements 
    until the sum drops safely back down to <= 5.

 2. THE NEGATIVE NUMBER TRAP (The #1 Interviewer Ambush):
    This Sliding Window logic ONLY WORKS FOR POSITIVE NUMBERS. 
    Why? The entire algorithm relies on a strict rule of physics: "Adding a number 
    makes the sum bigger; removing a number makes it smaller." 
    If an array contains negative numbers (e.g. [4, -2, 5]), expanding 'j' can 
    suddenly make the sum shrink. This breaks the logic of when to trigger Step 2.
    *The fix:* If the problem says "Array contains negative numbers", immediately 
    abandon Sliding Window and use a [Prefix Sum + HashMap].
================================================================================
*/