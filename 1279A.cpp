#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0);
 ll t; cin >> t;
 while(t--){
   vector<ll> v;
   ll r,g,b; cin >> r >> g >> b;
   v.push_back(r); 
   v.push_back(g);
   v.push_back(b);
   sort(v.begin(),v.end());
   if((v[0]+v[1]) >= v[2] - 1)
   cout << "Yes" << endl;
   else
   cout << "No" << endl;
 }
 return 0;
}