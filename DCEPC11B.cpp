#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binpow(ll a, ll b, ll m){
   ll res = 1;
   while(b > 0){
    if(b & 1)
    res = (res * a)%m;
   a = (a*a)%m;
   b >>= 1;
 }
 return res;
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  ll t; cin >> t;
  while(t--){
   ll n,p; cin >> n >> p;
   if(n >= p)
   cout << 0 << endl;
   else{
    ll ans = -1;
    for(ll i = n+1; i <= p-1; i++){
       ans = (ans * binpow(i,p-2,p)) % p;
    }
  cout << (ans+p) << endl;
 }
 }

 return 0;
}