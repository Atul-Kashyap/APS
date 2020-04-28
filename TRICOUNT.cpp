#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll t,n,sum=0;
cin >> t;
while(t--){
 cin >> n;
 if(n%2){
  sum = ( ( n * (n+2) * (2*n+1) ) - 1)/8;
  cout << sum << endl;
  sum = 0;

 }
  else{
   sum = ( n * (n+2) * (2*n+1) )/8;
   cout << sum << endl;
   sum = 0;

  }
 }
 return 0;

}