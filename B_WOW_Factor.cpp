#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    fastIO;
    string s;cin >> s;
    long long int a=0,b=0,c=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'o')b+=a;
        else if(i>0 && s[i-1] == 'v'){
            a++;
            c += b;
        }
        
    }
    cout << c << "\n";
    return 0;
}
