// Longest Substring without Repeating Characters.

/*

Given a string s, find the length of the longest substring without repeating characters.


Example:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring

*/

// Leetcode - 3. Longest Substring Without Repeating Characters
// Blind 75

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int i =0, j=0;
    int maxi = 0;
    unordered_map<char, int> mp;
    while(j < n){
        mp[s[j]]++;
        while(mp.size() < j-i+1){
            mp[s[i]]--;
            if(mp[s[i]] == 0) mp.erase(s[i]);
            i++;
        }
        if(mp.size() == j-i+1){
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
 📝 REVISION NOTES: LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS
    LeetCode 3
================================================================================
 * Pattern: Variable-Size Sliding Window
 * Time Complexity: O(N)
 * Space Complexity: O(1) (Map stores at most 26 lowercase English letters or 256 ASCII chars)

 THE CORE PHILOSOPHY:
 A window is valid ONLY IF the number of unique characters equals the window length.
 If Window Length > Unique Characters, it means a duplicate is hiding inside!

 THE 4-STEP ENGINE:
 1. ADD:     mp[s[j]]++;
 2. SHRINK:  While mp.size() < (j - i + 1), it means we have duplicates.
             Move 'i' forward, decrementing frequencies and erasing 0s, 
             until mp.size() == (j - i + 1) again.
 3. CHECK:   If valid, update maxi = max(maxi, j - i + 1).
 4. EXPAND:  j++;

 PRO-TIP: 
 You can actually optimize Step 2. The ONLY reason a window becomes invalid is 
 because the character you JUST added (s[j]) created a duplicate. So, an even 
 simpler shrink condition is: `while(mp[s[j]] > 1)`. Both work perfectly!
================================================================================
*/