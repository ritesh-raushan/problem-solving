#include <bits/stdc++.h>
using namespace std;

long long solve() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    
    long long threeSum = a + b + c;
    
    if (n <= a) {
        return 1;
    }
    
    long long cycles = (n / threeSum) * 3;
    long long remaining_distance = n - ((n / threeSum) * threeSum);
    
    if (remaining_distance == 0) {
        return cycles;
    }
    
    long long current = 0;
    long long extra = 0;
    
    if (remaining_distance > 0) {
        current += a;
        extra++;
        if (current >= remaining_distance) {
            return cycles + extra;
        }
    }
    
    if (remaining_distance > current) {
        current += b;
        extra++;
        if (current >= remaining_distance) {
            return cycles + extra;
        }
    }
    
    if (remaining_distance > current) {
        current += c;
        extra++;
        if (current >= remaining_distance) {
            return cycles + extra;
        }
    }
    
    return cycles + extra;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << endl;
    }
    
    return 0;
}