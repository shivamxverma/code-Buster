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
    int n, k;
    cin >> n >> k;
    vl v(n);
    cin >> v;
    
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        vector<int> subv(v.begin(), v.begin() + i);
        sort(subv.begin(), subv.end());
        int sum = 0;
        for (int j = subv.size() - 1; j >= 0; j -= 2)
        {
            sum += subv[j];
        }

        if (sum <= k)
        {
            result = i;
        }
        else
        {
            break;
        }
    }

    cout << result << endl;
}

signed main()
{
    fastIO;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
