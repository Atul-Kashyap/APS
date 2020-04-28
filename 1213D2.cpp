#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 ll n,k; cin >> n >> k;
 vector<ll> v(n);
 for(ll i = 0; i < n; i++) cin >> v[i];
 vector<vector<ll>> val(3000000);

 for(ll i = 0; i < n; i++){
  ll x = v[i];
  ll cnt = 0;
 while( x > 0 ){
    val[x].push_back(cnt);
    x /= 2;
    cnt++;
 }
}
 ll res = 1e9;
 ll m = 200 * 1000 + 5;
 for(ll i = 0; i < m; i++){
  sort(val[i].begin(),val[i].end());
  if(val[i].size() < k) continue;
  res = min(res,(ll) accumulate(val[i].begin(),val[i].begin()+k,0));
 }

cout << res << endl;
return 0;
}