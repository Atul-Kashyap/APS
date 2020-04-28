#include<bits/stdc++.h>
#define rep(i,n) for(long long i = 0; i < n; i++)
#define pb push_back()
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef pair<int,int> pii;
string str;
ll arr[1000005];
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
 ll t; cin >> t;
 while(t--){
  ll n,m; cin >> n >> m;
  ll a = (n/m) % 10;
  ll b = n/m - a;
     b = b/10;
  ll c,d,sum = 0;
  for(int i = 1; i <= 10; i++){
    c = (m * i) % 10;
    sum += c;
 }
    ll res = sum *b;
  for(int i = 1; i <= a; i++){
     res += ((m * i) % 10);
  }
   cout << res << endl;
   sum = 0;
   res = 0;
 }

return 0;
}
