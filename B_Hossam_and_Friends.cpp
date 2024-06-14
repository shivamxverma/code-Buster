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
void solve(){
     int n,m;cin>>n>>m;
     vl hsh(n+1,-1);
     rep(i,0,m){
         int x,y;cin>>x>>y;
         hsh[x] = 1,hsh[y] = 1;
     }
     int ans = 1,xd = 0;
     rep(i ,1 , n+1){
        cout << hsh[i] << " ";
     } 
     cout << endl;
    //  rep(i,1,n+1){
    //     if(hsh[i]==-1){
    //        ans++;
    //     }
    //     else {
    //        xd += (ans*(ans - 1)/2);
    //     }
    //  }
    //  cout << xd+n << endl;
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