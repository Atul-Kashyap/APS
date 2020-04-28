#include<bits/stdc++.h>
using namespace std;
 long long n,m;
 vector<string> v;
 int check(long long i,long long j){
 long long c=m+1;
   for(long long l=j; l<m; l++){            
      if(v[i][l] == '.')
          c=l;
      if(v[i][l] == '*' && l > c)
          return 0;
   }
   c = -1;
   for(long long l=j; l>=0; l--){
      if(v[i][l] == '.')
          c=l;
      if(v[i][l] == '*' && l < c)
          return 0;
   }
   c=n+1;
   for(long long l=i; l<n; l++){            
      if(v[l][j] == '.')
          c=l;
      if(v[l][j] == '*' && l > c)
          return 0;
   }
   c = -1;
   for(long long l=i; l>=0; l--){
      if(v[l][j] == '.')
          c=l;
      if(v[l][j] == '*' && l < c)
          return 0;
   }
   for(long long l = 0; l<n; l++){
     for(long long k=0; k<m; k++){
       if(v[l][k] == '*' && l!= i && k!= j)
        return 0;
    }
   }
  return 1;
 }
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 string str;
 int res;
 cin >> n >> m;
 for(long long i=0; i<n; i++){ cin >> str; v.push_back(str); }
  for(long long i=1; i<n-1; i++){
   for(long long j=1; j<m-1; j++){
     if(v[i][j] == '*' && v[i][j+1] == '*' &&  v[i+1][j] == '*' && v[i][j-1] == '*' && v[i-1][j] == '*'){
        res = check(i,j);
        if(res == 0)
        cout << "NO" << endl;
        if(res == 1)
        cout << "YES" << endl;
        return 0;
     }
   }
  }
 cout << "NO" << endl; 
 return 0;
}