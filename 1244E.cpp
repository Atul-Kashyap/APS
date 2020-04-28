#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 long long n, k; cin >> n >> k;
 for(long long i = 1; i <= n; i++) cin >> arr[i];
 sort(arr+1, arr+n);
 long long i = 1, j = n;
 while(k > 0 && i+1 < j){
   if(abs(arr[i+1] - arr[i]) <= k){
    arr[i] += arr[i+1] - arr[i];
    k -= (arr[i+1] - arr[i]);
    i++;
  }
 else if(abs(arr[i+1] - arr[i]) > k && k > 0){
   arr[i] += k;
   k = 0;
  if(i > 1)
   i--; 
  }
 
  else if(abs(arr[j] - arr[j-1]) <= k ){
     k -= (arr[j] - arr[j-1]);
     arr[j] -= arr[j] - arr[j-1] ;
     j--;
  }
 else if(abs(arr[j] - arr[j-1]) > k && k > 0){
     arr[j] -= k;
     k = 0;
     if(j < n)
     j++;
  }

 }
 cout << "k " << k << endl;
 cout << arr[j] << "  " << arr[i] << endl;
  cout << arr[j] - arr[i] << endl;


 return 0;
}