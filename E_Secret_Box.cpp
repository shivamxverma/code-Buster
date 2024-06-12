#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> v(4);
        for(int i = 0; i < 4; i++)cin>>v[i];
        sort(v.begin(), v.end()-1);
        int k = v[3];
        for (int x = 1; x * x * x <= k; ++x) {
        if (k % x == 0) {
            for (int y = x; y * y <= k / x; ++y) {
                if ((k / x) % y == 0) {
                    int z = k / (x * y);
                    if (z >= y) {
                        
                    }
                }
            }
        }
    }
    }
    return 0;
}
