#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll n,m,p;
 string str;
 vector< string > v;
 cin >> n;
 n = n * 2;
 for(ll i=0; i<n; i++){
  cin >> str;
  v.push_back(str); 
 }
 for(ll i=0; i<n-1; i++){
   m = v[i].size();
   p = v[i+1].size();
   if(v[i] == v[i+1])
   cout << "YES" << endl;
    else if(p < m)
    cout << "NO" << endl;
     else{
       ll j=0,k=0;
       while(k < p ){
         if(v[i][j] == v[i][k])
           k++;
         if(v[i][j] != v[i][k])
           if(j < m-1)
            j++;

        }
      if(k >= p-1)
      cout << "YES" << endl;
      else 
      cout << "NO" << endl;
    }
 i++;
 }
return 0;
}