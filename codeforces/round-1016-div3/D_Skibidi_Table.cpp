#include <bits/stdc++.h>
using namespace std;
#define int long long

// Function to get the number at position (x, y) in a 2^n x 2^n table
int get_number(int n, int x, int y) {
    if (n == 1) {
        if (x == 1 && y == 1) return 1;
        if (x == 2 && y == 2) return 2;
        if (x == 2 && y == 1) return 3;
        if (x == 1 && y == 2) return 4;
    }
    
    int size = 1LL << (n - 1);
    int block_size = size * size;

    if (x <= size && y <= size) {
        // Top-left
        return get_number(n - 1, x, y);
    } else if (x > size && y > size) {
        // Bottom-right
        return block_size + get_number(n - 1, x - size, y - size);
    } else if (x > size && y <= size) {
        // Bottom-left
        return 2 * block_size + get_number(n - 1, x - size, y);
    } else {
        // Top-right
        return 3 * block_size + get_number(n - 1, x, y - size);
    }
}

// Function to get the coordinates (x, y) of number d in a 2^n x 2^n table
pair<int, int> get_coordinates(int n, int d) {
    if (n == 1) {
        if (d == 1) return {1, 1};
        if (d == 2) return {2, 2};
        if (d == 3) return {2, 1};
        if (d == 4) return {1, 2};
    }

    int size = 1LL << (n - 1);
    int block_size = size * size;

    if (d <= block_size) {
        // Top-left
        return get_coordinates(n - 1, d);
    } else if (d <= 2 * block_size) {
        // Bottom-right
        auto [x, y] = get_coordinates(n - 1, d - block_size);
        return {x + size, y + size};
    } else if (d <= 3 * block_size) {
        // Bottom-left
        auto [x, y] = get_coordinates(n - 1, d - 2 * block_size);
        return {x + size, y};
    } else {
        // Top-right
        auto [x, y] = get_coordinates(n - 1, d - 3 * block_size);
        return {x, y + size};
    }
}

void solve() {
    int n, q;
    cin >> n >> q;
    while (q--) {
        string type;
        cin >> type;
        if (type == "->") {
            int x, y;
            cin >> x >> y;
            cout << get_number(n, x, y) << '\n';
        } else {
            int d;
            cin >> d;
            auto [x, y] = get_coordinates(n, d);
            cout << x << " " << y << '\n';
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
