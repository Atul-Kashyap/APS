#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 float a,b,c,d,k,t; cin >> t;
  while(t--) {
  cin >> a >> b >> c >> d >> k;
  if(ceil(a/c) + ceil(b/d) <= k) cout << ceil(a/c) << " " << ceil(b/d) << endl;
  else cout << -1 << endl;
 }
return 0;
}