#include<bits/stdc++.h>
using namespace std;
int a[100005];
int d[100005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int q; cin >> q;
 while(q--){
  int cnt = 0,maxm1 = 0,maxm2 = 0;
  int n; cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a,a+n);
  for(int i = 0; i < n-1; i++)
      d[i] = a[i+1] - a[i];
 cnt = 0;
 for(int i = 0; i < n-1; i++){
    if( d[i] == 1)
         cnt++;
    else{
      maxm2 = max(cnt,maxm2);
      cnt = 0;
   }
 }
 maxm2 = max(cnt,maxm2);
 if(maxm2 >= 1)
 cout << 2 << endl;
 else
 cout << 1 << endl;
}
 




 return 0;
 }