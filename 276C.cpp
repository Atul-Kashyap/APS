#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0);
// double beg = clock();
 ll n,q,l,r; cin >> n >> q;
 vector<ll> v(n); for(ll &a : v) cin >> a;
 sort(v.begin(),v.end());
 vector<ll> v1(n+1,0);
 for(int i = 1; i <= q; i++){
   cin >> l >> r;
   v1[l-1]++;
   v1[r]--;
 }
 for(int i = 1; i <= n; i++)
  v1[i] += v1[i-1];
 sort(v1.begin(),v1.end());
 ll sum = 0;
 for(ll i = 1; i < n+1; i++)
 sum += (v1[i] * v[i-1]);
 cout << sum << endl;
// double end = clock();
// cout << (end - beg)/ CLOCKS_PER_SEC << endl;
 return 0;
}