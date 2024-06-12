#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
const int N = 1e7+10;
#define int long long int

signed main() {
    fastIO;
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            char c = (s[i + 1] - 'a' + 1) % 26 + 'a';
            if (i + 2 < s.length() && c == s[i + 2]) {
                c = (c - 'a' + 1) % 26 + 'a';
            }
            s[i + 1] = c;
        }
    }

    cout << s << endl;
    return 0;
}
