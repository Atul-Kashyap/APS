#include<bits/stdc++.h>
using namespace std;
int finder(int m)
{
   int sum =0;
   while(m){
   sum += (m % 10);
   m = m / 10;
  }
   return sum;
 }
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n,s;
 cin >> n;
 
 while( 1){
  s = finder(n);
  if( s % 4 == 0){
  cout << n << endl;
  break;
  } 
  else{
   //n = n + (4 - (s % 4));
   n++;
   }
}
return 0;
}