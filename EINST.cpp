#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t; cin >> t;
 while(t--){
  ll S,N; cin >> S >> N;
  vector<ll> v(N);
  for(ll &a : v) cin >> a;
  sort(v.begin(),v.end());
  vector<ll> dp(S+1,9999999);
  dp[0] = 0;
  ll minm; 
  for(ll i = 1; i <= S; i++){
     minm = LLONG_MAX;
     for(ll j = 0; j < N; j++){
        if(v[j] <= i){
        dp[i] = min(dp[i], dp[i - v[j]] + 1);
      }
 }
 return 0;
}