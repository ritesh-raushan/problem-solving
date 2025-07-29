#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;

        vector<char> l;
        int i = 0;

        for(char c : s){
            l.push_back(c);

            while(l.size() >= 2 && l[l.size() - 2] != l.back() && i < r.size()){
                char replacement = r[i];
                l.pop_back();
                l.pop_back();
                l.push_back(replacement);
                i++;
            }
        }

        if(i == n-1 && l.size() == 1){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
