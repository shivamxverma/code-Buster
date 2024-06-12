#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;
#define int long long int
#define vl vector<int>
#define MOD 1000000007

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    int maxi = 0, ans = 0, ind = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        int count_hash = count(grid[i].begin(), grid[i].end(), '#');
        if (count_hash > maxi) {
            maxi = count_hash;
            ind = i;
        }
    }

    int y = 0;
    for (int j = 0; j < m; j++) {
        if (grid[ind][j] == '#') {
            ans++;
        }
        if ((maxi + 1) / 2 == ans) {
            y = j;
            break;
        }
    }
    
    cout << ind + 1 << " " << y + 1 << "\n";
}

signed main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
