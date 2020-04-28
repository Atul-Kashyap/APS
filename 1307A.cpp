#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);
 ll  t; cin >> t;
 while(t--){
 ll n, d; cin >> n  >> d;
 vector<ll> v(n);
 for(ll &a : v) cin >> a;
 for(ll i = 1; i < n; i++){
  ll r = min(v[i],d/i);
  v[0] += r;
  d -= r*i;
 }
 cout << v[0] << endl;
}
 return 0;
}