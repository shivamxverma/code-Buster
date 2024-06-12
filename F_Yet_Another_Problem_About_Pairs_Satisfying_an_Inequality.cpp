#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define repr(i, a, b) for (int i = (a); i >= (b); i--)
#define printyes cout << "YES\n";
#define printno cout << "NO\n";
#define space " "
using namespace std;
const int N = 1e7 + 10;
#define int long long int
#define vl vector<int>
#define MOD 1000000007
#define INF LLONG_MAX
#define pii pair<int, int>

template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &vi : v)
    {
        in >> vi;
    }
    return in;
}

void solve()
{
    int n;
    cin >> n;
    vl v(n + 1);
    rep(i, 1, n + 1) cin >> v[i];
    vl pre(n + 1, 0);
    rep(i, 1, n + 1)
    {
        if (i > v[i])
            pre[i] = 1;
    }
    rep(i, 1, n + 1)
    {
        pre[i] += pre[i - 1];
    }

    int ans = 0;
    repr(i, n, 1)
    {
        if(v[i] < i && v[i] - 1 > 0)
           ans += pre[v[i] - 1];
    }
    cout << ans << "\n";
}

signed main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
