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

// 239. Sliding Window Maximum (on LeetCode) Hard

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto&x:a)cin >>x;
    int i=0, j=0;
    deque<int>dq;
    while(j<n){
        while(!dq.empty() && dq.back() < a[j]) dq.pop_back();
        dq.push_back(a[j]);
        
        if(j-i+1 < k) j++;
        else if(j-i+1 == k){
            cout << dq.front() << " ";
            if(dq.front() == a[i]) dq.pop_front();
            i++; j++;
        }
    }
}

/*
================================================================================
📝 REVISION NOTES: SLIDING WINDOW MAXIMUM (Monotonic Deque)
================================================================================
 * Pattern: Monotonic Decreasing Deque
 * Time Complexity: O(N)  (Amortized O(1) per element — pushed/popped at most once)
 * Space Complexity: O(K) (The Deque holds at most K potential candidates)

THE CORE PHILOSOPHY:
The Deque is a "VIP Lounge" for numbers, kept in strictly decreasing order.
The absolute maximum of the current window is ALWAYS sitting at dq.front().

THE 3-STEP ENGINE (Executed for every a[j]):

1. CLEAN THE BACK DOOR (The "Better Successor" Rule)
    while(!dq.empty() && dq.back() < a[j]) dq.pop_back();
    * Logic: If a bigger number arrives, kick out all smaller numbers behind it.
    They are officially useless because they can never be the max of any future window.

2. TAKE A SEAT
    dq.push_back(a[j]);

3. HANDLE MATURE WINDOW (j - i + 1 == k)
    A. Capture the King:   cout << dq.front();
    B. Check ID at Front:  if(dq.front() == a[i]) dq.pop_front();
       * Logic: "Is the number sliding out of the window the one sitting at the head?"
        If yes, his reign is over; evict him out the front door.
    C. Slide pointers:     i++; j++;

⚠️ HIGH-STAKES INTERVIEW "GOTCHAS":
1. Why not a Max-Heap? Heaps take O(log K) to re-balance. Doing that N times
    makes the algorithm O(N log K). The Deque achieves pure O(N).
2. What about duplicate numbers (e.g. [3, 3])? Because step 1 uses strictly `<`
    and not `<=`, the second '3' is allowed to sit in the deque right behind the first '3'.
    When the first expires, the backup takes the throne safely!
================================================================================
*/