#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
int main()
{
 long long n; cin >> n;
 int pos = 0,neg = 0,zr = 0;
 for(int i = 0; i < n; i++){
 cin >> arr[i];
 if(arr[i] > 0)
 pos++;
 else if(arr[i] <= 0)
 neg++;
 }
 sort(arr,arr+n);
 long long cnt = 0;
 if(neg % 2 == 0){
  for(int i = 0; i < neg; i++){
      cnt += abs(abs(arr[i]) - 1);
  }
  for(int i = neg; i < n; i++)
    cnt += arr[i] - 1;

 cout << cnt << endl; 
}
else{
  for(int i = 0; i < neg-1; i++)
    cnt += abs(abs(arr[i]) - 1);
    cnt += abs(arr[neg-1]) + 1;
  for(int i = neg; i < n; i++)
    cnt += arr[i] - 1;
 cout << cnt << endl; 
}
return 0;
}