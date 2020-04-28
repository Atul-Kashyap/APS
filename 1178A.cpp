#include<bits/stdc++.h>
#define rep(i,n) for(long long i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 vector<pair<int,int>>v;
 vector<int> v1;
 ll sum = 0,n,a,p;
 cin >> n >> p;
 sum += p;
 rep(i,n-1){
 cin >> a;
 v.pb(make_pair(a,i+2));
 sum += a;
}
if (p > floor(sum/2)){ cout << 1 << endl << 1 << endl; return 0;}
 else{
     int total = 0;
     sort(all(v));
     for(int j = 0; j < n-1; j++){
      if( p >= (2 * v[j].first)) total += v[j].first;
       if((p+total) > floor(sum/2)){
        cout << j+2 << endl;
        for(int i = 0; i <= j; i++)
         v1.pb(v[i].second);
        sort(all(v1));
        cout << 1 << " " ;
        for(int i = 0 ; i<=j; i++)
         cout << v1[i] << " " ;
        cout << endl;
        return 0;
      }
  }


 }

cout << 0 << endl;
return 0;
}