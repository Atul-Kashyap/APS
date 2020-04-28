#include<bits/stdc++.h>
#define rep(i,n) for(long long i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<pair<int,int>> pii;
int a[1000000]; 
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 ll t; cin >> t;
 while(t--){
  ll sum = 0,cnt = 0;
  ll n; cin >> n;
  for(ll i = 0; i < n; i++) cin >> a[i];
  ll num = a[n-1];
  for(int i = n-2; i >= 0; i--){
     if(num < a[i])
         cnt++;
     else
        num = a[i];

  }
   cout << cnt << endl;

 }
return 0;
}
