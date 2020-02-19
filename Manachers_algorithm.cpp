#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str,s; cin >> str;
 int n = str.size();
 for(int i = 0; i <= n; i++)
   s += "#" + str.substr(i,1);
   n = (2 * n) + 1;
   //cout << s << endl;
 vector<int> v(n,0);
 int r = 1,c = 1;
 for(int i = 1; i < n-1; i++){
  int mirr = c - (i-c);
  if( i > r )
    v[i] = min(r-i,v[mirr]);
  while((s[i+1+v[i]] == s[i-1-v[i]]))// && (i+1+v[i] < n && i-1-v[i] >= 0))
    v[i]++;
 if(i+v[i] > r){
   c = i;
   r = i + v[i];
 }
 }
 int maxm = -1;
 for(int i = 0; i < n; i++){
    if(maxm < v[i]){
      c = i;
      maxm = v[i];
   // cout << v[i] << " ";
   } 
 }
 cout << maxm << endl; 
 cout << str.substr((c - maxm)/2,maxm) << endl;

 return 0;
}