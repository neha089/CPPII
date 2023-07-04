#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int count = 0;
                if (i > 0) count++; // check top neighbor
                if (i < n - 1) count++; // check bottom neighbor
                if (j > 0) count++; // check left neighbor
                if (j < m - 1) count++; // check right neighbor
                if (count < 2) { // if less than 2 neighbors, not possible
                    possible = false;
                    break;
                }
            }
            if (!possible) break; // if not possible, break out of outer loop
        }
        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
