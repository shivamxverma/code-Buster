#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,a,b) for(int i=(a);i>=(b);i--)
#define printyes cout<<"YES\n";
#define printno cout<<"NO\n";
using namespace std;
const int N = 1e7+10;
#define int long long int
void solve(){
     int n,k;cin >> n >> k;
     int v[n][n];
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
     }
     int cnt = 0;
     for(int i=0; i<n/2; i++){
        for(int j=0 ; j<n ; j++){
            if(v[i][j]!=v[n-1-i][n-1-j])cnt++;
        }
     }
     cout << (cnt>=k?"NO":"YES") << endl;
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