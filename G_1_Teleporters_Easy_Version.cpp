#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,a,b) for(int i=(a);i>=(b);i--)
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<long long> ans(n + 1, 0);
    for (int i = 0; i < n; i++) {
        ans[i + 1] = v[i] + (i + 1);
    }

    sort(ans.begin(), ans.end());

    for (int i = 1; i <= n; i++) {
        ans[i] += ans[i - 1];
    }
    auto it = upper_bound(ans.begin(), ans.end(), x);
    int ind = it - ans.begin() - 1;
    cout << ind << "\n";
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
