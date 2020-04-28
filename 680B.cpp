#include<bits/stdc++.h>
using namespace std;
long long arr[10000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 long long n,a,i; cin >> n >> a;
 for(i = 1; i <= n; i++) cin >> arr[i];
 long long cnt = 0;
 if(arr[a]) cnt++;
 if(a - 1 > n - a){
  for(i = 1; a+i <= n; i++){
     if(arr[a-i] == 1 && arr[a+i] == 1)
        cnt += 2;
  }
  while(a - i){
    if(arr[a-i]) cnt++;
    i++;
   }
 }
 else{
  for(i = 1; a-i > 0; i++){
    if(arr[a-i] == 1 && arr[a+i] == 1)
          cnt += 2;
  }
  while(a + i <= n){
    if(arr[a+i]) cnt++; 
    i++;
  }
 }
 cout << cnt << endl;

return 0;
}