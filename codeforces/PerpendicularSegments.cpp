#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k; 
        int ax, ay, bx, by;
        int cx, cy, dx, dy;
        int t=min(x,y);
        ax = 0; 
        ay = 0;
        bx = t; 
        by = t;

        cx = 0; 
        cy = t; 
        dx = t; 
        dy = 0;

        cout << ax << " " << ay << " " << bx << " " << by << endl; 
        cout << cx << " " << cy << " " << dx << " " << dy << endl; 
    }

    return 0;
}