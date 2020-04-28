#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 vector<ll> v;
 string str,pass;
 ll n,k,sz; cin >> n >> k;
 for(ll i = 0; i < n; i++){ cin >> str;  sz = str.size(); v.push_back(sz); }
 cin >> pass;
 ll pass_sz = pass.size();
 sort(v.begin(),v.end());
 ll ans = (lower_bound(v.begin(),v.end(),pass_sz) - v.begin()+1);
 cout << ans + (((ans-1)/k) * 5) << " ";
 ll res = (upper_bound(v.begin(),v.end(),pass_sz) - v.begin()) ;
 cout << ( res + (((res-1)/k) * 5) ) << endl;


 return 0;
}
