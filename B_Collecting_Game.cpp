#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,a,b) for(int i=(a);i>=(b);i--)
#define printyes cout<<"YES\n";
#define printno cout<<"NO\n";
#define space " "
using namespace std;
const int N = 1e7+10;
#define int long long int
#define vl vector<int>
#define MOD 1000000007
#define INF LLONG_MAX

template <class T>
istream & operator>> (istream &in, vector<T> &v) {
    for (auto &vi : v) {
        in >> vi;
    }
    return in;
}

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

void solve() {
    int n; 
    cin >> n;
    vector<pair<int,int>> v(n+1);
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        v[i] = {x, i};
    }
    
    sort(v.begin(), v.end()); 
    
    vl pre(n + 1, 0);
    rep(i, 1, n+1) {
        pre[i] = pre[i-1] + v[i].first;
    }

    vector<pair<int, int>> ans;
    repr(i,n-1,0) {
        auto it = lower_bound(v.begin(), v.end(), make_pair(pre[i + 1], 0LL)); 
        
        int ind = it - v.begin() - 1;
        ans.push_back({ind, v[i].second});
    }

    sort(ans.begin(), ans.end(), cmp); 
    
    for (auto x : ans) {
        cout << x.first << " ";
    }
    cout << endl;
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
