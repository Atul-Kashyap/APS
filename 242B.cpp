// we can solve it without using pairs 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 ll n,a,b,minm = 10000000005 ,maxm = 0; cin >> n;
 vector<pair<ll,ll>> v;
 for(ll i = 0; i < n; i++){
   cin >> a >> b;
   v.push_back(make_pair(a,b));
  minm = min(a,minm);
  maxm = max(b,maxm);
 }
// cout << minm << " " << maxm << endl;
 for(ll i = 0; i < n; i++){
 //  cout << v[i].first << " " << v[i].second << endl;
    if(v[i].first <= minm && v[i].second >= maxm){
     cout << i+1 << endl;
     return 0;
    } 
 }
 cout << -1 << endl;
 return 0;
}