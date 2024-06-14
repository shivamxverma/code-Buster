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
     int n;cin>>n;
     vl cnt(n+1,0);
     for(int i=0;i<n;i++){
        int x;cin>>x;
        ++cnt[x];
     }
     sort(cnt.rbegin(),cnt.rend());
     int ans = cnt[0];
     int lst = cnt[0];
     for(int i=1;i<=n;i++){
         if(lst == 0)break;
         if(cnt[i]>=lst){
            ans += lst -1;
            lst -= 1;
         } else {
            ans += cnt[i];
            lst = cnt[i];
         }
     }
     cout << ans << endl;
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