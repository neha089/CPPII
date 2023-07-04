#include <iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); // clear the newline character from the input buffer
        string s;
        getline(cin, s);
        int count = 0;
        bool is_easy = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                count++;
                if (count >= 4) {
                    is_easy = false;
                    break;
                }
            } else {
                count = 0;
            }
        }
        if (is_easy) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
