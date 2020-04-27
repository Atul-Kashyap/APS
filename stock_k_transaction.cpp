#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"
#define all(x) x.begin(),x.end()
#define io ios_base::sync_with_stdio(false); cin.tie(0)
int const mod = 1000000000+7;
int32_t main()
{
    io;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        int k,n;
        cin >> k >> n;
        vector<int> v(n);
        for(int &a : v)
            cin >> a;
        int dp[k+1][n+1];
        for(int i = 0; i <= k; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else{
                     int mx = LLONG_MIN;
                     for(int k = 0; k < j; k++){
                        mx = max(mx,(v[j] - v[k])+dp[i-1][k]);
                     }
                    dp[i][j] = max(dp[i][j-1],mx);
                }
            }
        }
       cout << dp[k][n-1] << endl; 
    }
    
   

return 0;
}
