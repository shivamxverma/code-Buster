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
const int n = 400001;
#define int long long int
#define vl vector<int>
#define MOD 998244353
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
vector<int> p2(n, 1);
void solve()
{
    int n;
    cin >> n;
    vl v(n);
    cin >> v;
    int sum = 0, mn = 0, ans = 0, abses = 0;
    rep(i, 0, n) sum += v[i], mn = min(mn, sum);
    if (mn == 0)
    {
        cout << p2[n] << "\n";
        return;
    }
    sum = 0;
    rep(i, 0, n)
    {
        sum += v[i];
        if (sum == mn)
        {
            ans = (ans + p2[n - i - 1 + abses]) % MOD;
        }
        if (sum >= 0)
            ++abses;
    }
    cout << ans << "\n";
}
signed main()
{
    fastIO;
    for (int i = 1; i < n; ++i)
        p2[i] = 2 * p2[i - 1] % MOD;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}