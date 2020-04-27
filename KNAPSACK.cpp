#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  ll c,n; cin >> c >> n;
  vector<ll> wt(n),v(n);
 
  for(ll i = 0; i < n; i++)
    cin >> wt[i] >> v[i];

  ll dp[n+1][c+1];
  for(ll i = 0; i <= n; i++){
    for(ll j = 0; j <= c; j++){
     if(i == 0 || j == 0)
        dp[i][j] = 0;
     else if(wt[i-1] > j)
        dp[i][j] = dp[i-1][j];
     else
        dp[i][j] = max(v[i-1] + dp[i-1][j - wt[i-1]], dp[i-1][j]);
   }
 }
  cout << dp[n][c] << endl;
 return 0;
}