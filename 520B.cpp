#include<bits/stdc++.h>
using namespace std;
 int res(int n,int m){
  if(n > m)
   return 0;
  if(n <= m)
   return 1;
  return res(n*2) + res(n-1);  
}
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0);
 long long n,m,x; cin >> n >> m;
 int cnt = 0,d = 0,minm = 99999999;
 cout << res(n,m) << endl;
return 0;
}