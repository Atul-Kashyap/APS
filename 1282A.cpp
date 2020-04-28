#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0);
 int t; cin >> t;
 while(t--){
  int a,b,c,r; cin >> a >> b >> c >> r;
  int L = c-r,R = c+r;
  int d = max(L,min(a,b));
  int e = min(R,max(a,b));
  cout << abs(b-a) - max(0,e-d) << endl;
 } 
return 0;
}