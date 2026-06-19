// Count Occurrences of Anagrams (a word or phrase that is made by arranging the letters of another word or phrase in a different order).

/*

Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears in the txt, hence answer is 3.

Example 2:

Input:
txt = aabaabaa
pat = aaba
Output: 4
Explanation: aaba is present 4 times in txt.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string txt, pat;
    cin >> txt >> pat;
    map<char, int>mp;
    int n = txt.length();
    int m = pat.length();
    for(int i=0; i<m; i++) mp[pat[i]]++;
    int count = mp.size();
    int ans = 0;
    int i=0, j=0;
    while(j < n){
        // check if the txt[j] is present in the map, if present decrease the count of that character.
        if(mp.find(txt[j]) != mp.end()){
            mp[txt[j]]--;
            if(mp[txt[j]] == 0) count--; // check if character's frequency hits zero.
        }
        if(j-i+1 < m) j++;
        else if(j-i+1 == m){
            // if count if zero this is a valid anagram.
            if(count == 0) ans++;
            // do operation for ith character
            if(mp.find(txt[i]) != mp.end()){
                mp[txt[i]]++;
                if(mp[txt[i]] == 1){
                    count++; 
                }
            }
            i++; j++;
        }
    }
    cout << ans;
}