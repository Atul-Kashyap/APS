#include<bits/stdc++.h>
#define rep(i,n) for(long long i = 1; i <= n; i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<pair<int,int>> pii;
int a[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,x,y; cin >> n >> x >> y;
 rep(i,n) cin >> a[i];
 for(int i = 1; i <= n; i++){
   bool pos = 1;
  for(int j = max(1,i-x); j < i; j++){
     if(a[i] > a[j])
      pos = 0;
  }
  for(int j = i+1; j <= min(n,i+y); j++){
    if(a[i] > a[j])
      pos = 0;
  }
   if(pos){
    cout << i << endl;
    return 0;
  }
 }



return 0;
}
