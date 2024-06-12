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
void solve(){
     int n;cin>>n;
     int ans = 0,res;
     rep(i,2,n+1){
         int xd = n/i;
         int sum = i*(xd * (xd+1)/2);
         if(sum > ans){
            ans = sum;
            res = i;
         }
     }
     cout << res << endl;
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