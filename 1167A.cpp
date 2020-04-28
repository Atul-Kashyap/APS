#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int t,n,c,i;
 string str;
 cin >> t;
 while(t--){
   cin >> n >> str;
   c = n- 11;
   if(n >= 11){
    for(i =0 ;i<=c;i++){
       if(str[i] == '8'){
       cout << "YES" << endl;
       break;
       }
    } 
   if(i == c+1)
   cout << "NO" << endl;
   }
 else
  cout << "NO" << endl;
 str.clear();
 }

 return 0;
}