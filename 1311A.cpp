#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);
 ll t; cin >> t;
 while(t--){
 ll a,b; cin >> a >> b;
 if(a == b)
 cout << 0 << endl;
 else if( a < b){ 
  if( (a&1) ^ (b&1))
  cout << 1 << endl;
  else
  cout << 2 << endl;
 }
 else{
  if( (a&1) ^ (b&1))
  cout << 2 << endl;
  else
  cout << 1 << endl;
 }
}
 return 0;
}