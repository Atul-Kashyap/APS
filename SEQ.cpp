#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000000
vector<ll> b,c;
ll k;

vector<vector<ll>> mat_mul(vector<vector<ll>> v1,vector<vector<ll>> v2){
  vector<vector<ll>> tmp(k, vector<ll>(k));
  for(ll i = 0; i < k; i++){
     for(ll j = 0; j < k; j++){
        for(ll l = 0; l < k; l++)
            tmp[i][j] = (tmp[i][j] + (v1[i][l] * v2[l][j]%MOD))%MOD;
        }
    }
  return tmp;
}

vector<vector<ll>> mat_exp(vector<vector<ll>> M, ll n){

 if(n ==1)
 return M;

 if(n & 1)
  return mat_mul(M, mat_exp(M,n-1));

 else{

  vector<vector<ll>> v = mat_exp(M,n/2);
  return mat_mul(v,v);

 }
  
}

ll compute(ll n){
   if( n == 0)
   return 0;

   if(n <= k)
   return b[n-1];

   vector<vector<ll>> T(k, vector<ll>(k,0));
   for(ll i = 0; i < k-1; i++){
      for(ll j = 0; j < k; j++){
         if(j == i+1)
         T[i][j] = 1;
     }
   }
   for(ll i = k-1; i < k; i++){
      for(ll j = 0; j < k; j++){
         T[i][j] = c[i-j];
     }
   }
   T = mat_exp(T,n-1);
   ll res  = 0; 
   for(ll i = 0; i < k; i++){
   res = (res + (T[0][i] * b[i] % MOD))% MOD;
   }

  return res;
 
 }
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);
 ll t, a; cin >> t;
 while(t--){
  cin >> k;
  for(ll i = 0; i < k; i++){
      cin >> a;
      b.push_back(a);
  }
  for(ll i = 0; i < k; i++){
      cin >> a;
      c.push_back(a);
  }
  ll n; cin >> n;
  cout << compute(n) << endl;
  b.clear();
  c.clear();
 }
 return 0;
}