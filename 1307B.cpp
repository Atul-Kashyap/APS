#include<bits/stdc++.h>
using namespace std;
#define ll long  long 
int main()
{
 ll t; cin >> t;
 while(t--){
 ll n,x; cin >> n >> x;
 vector<ll> v(n);
 for(ll &a : v) cin >> a;
 sort(v.begin(),v.end());
 if(binary_search(v.begin(),v.end(),x))
 cout << 1 << endl;
 else{
 ll y = ceil(x/(v[n-1]*1.0));
 cout << max((ll)2,y) << endl;
 
 }

 }
 return 0;
}