#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n;
 string s,str;
 cin >> n >> s;
 if( n & 1){
      str = s[0];
  for(int i = 1; i < n; i++){
      str =  s[i] + str;
      str = str +  s[i+1] ;
      i++;
  }
 }
 else
 {
   for(int  i = 0; i < n; i++){
      str = s[i] + str;
      str = str + s[i+1];
      i++;

   }
 }
 cout << str;
return 0;
}