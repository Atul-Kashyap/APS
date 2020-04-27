#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
 ll t; cin >> t;
 while(t--){
 ll n; cin >> n;
 vector<ll> v(n);
 for( ll &a : v) cin >> a;
 ll sum = v[0];
 ll maxm = v[0];
 for(ll i = 1; i < n; i++){
   maxm = max(v[i], maxm + v[i]);
   if(maxm > sum) sum = maxm;
 }
 cout << sum << endl;

 }
 return 0;
}