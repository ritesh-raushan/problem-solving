// Longest Substring with K Uniqque Characters

/*

Given a string you need to print the size of the longest possible substring that has exactly k unique characters.


Example:
Input:
2
aabacbebebe
3
aaaa
1
Output:
7
4

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int k;
    string s;
    cin >> s>> k;
    int n = s.length();
    unordered_map<char, int>mp;
    int i = 0, j = 0;
    int  maxi = INT_MIN;
    while(j < n){
        mp[s[j]]++;
        while(mp.size() > k){
            mp[s[i]]--;
            if(mp[s[i]] == 0) mp.erase(s[i]);
            i++;
        }
        if(mp.size() == k){
            maxi = max(maxi, j-i+1);
        }
        j++;
    }
    cout << maxi << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

/*
================================================================================
 📝 REVISION NOTES: VARIABLE-SIZE SLIDING WINDOW + HASH MAP
    Problem: Longest Substring with K Unique Characters
================================================================================
 * Pattern: Dynamic Window (Add -> Shrink -> Check -> Expand)
 * Time Complexity: O(N)  (Each character is processed at most twice)
 * Space Complexity: O(K) (The map stores at most K + 1 unique characters)

 THE CORE PHILOSOPHY:
 Use a Hash Map to track the frequency of characters in the current window.
 The size of the map (mp.size()) tells us exactly how many UNIQUE characters we have.

 THE 4-STEP ENGINE:
 1. ADD:     mp[s[j]]++;
 2. SHRINK:  If the map size exceeds K, move 'i' forward to drop characters.
             *CRITICAL*: When a character's frequency hits 0, you MUST use mp.erase() 
             so mp.size() updates correctly.
 3. CHECK:   If mp.size() == K, update the max length: max(maxi, j - i + 1).
 4. EXPAND:  j++;

 ⚠️ HIGH-STAKES INTERVIEW "GOTCHAS":
 1. The Phantom Key Trap: If you just do mp[s[i]]-- and leave the frequency at 0, 
    mp.size() will still count that key! You MUST erase it: 
    if(mp[s[i]] == 0) mp.erase(s[i]);
 2. Order Matters: Always SHRINK before you CHECK. If you check first, you might 
    accidentally evaluate an invalid window.
 3. The Impossible Case: Always initialize maxi = -1. If a string only has 3 
    unique characters but K = 5, you'll never find a valid window. Returning -1 
    handles this gracefully.
================================================================================
*/