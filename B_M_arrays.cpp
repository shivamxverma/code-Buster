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
#define pii pair<int,int>
template <class T>
istream & operator>> (istream &in, vector<T> &v) {
    for (auto &vi : v) {
        in >> vi;
    }
    return in;
}
void solve(){
     int n,m;cin>>n>>m;
     map<int,int> cnt;
     rep(i,0,n){
        int x;cin>>x;
        cnt[x%m]++;
     }
     int ans = 0;
     for(auto &x : cnt){
        int t = x.first;
        if(t == 0)ans++;
        else if(2*t == m)ans++;
        else if(2*t<m || (cnt.find(m-t) == cnt.end())){
            int xd = x.second,y = cnt[m - t];
            ans += 1 + max(0ll,abs(xd - y) - 1);
        }
     }
     cout << ans << "\n";
}
signed main(){
    fastIO;
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}