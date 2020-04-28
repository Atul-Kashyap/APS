#include<bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
long long a[1000000],b[1000000];
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 string str;
 long long n,cnt = 0,res = 0;
 cin >> str;
 n = str.size();
 a[0] = 0;
 for(long long i = 1; i < n; i++){
   if(str[i-1] == str[i] && str[i] == 'v'){
      cnt++;
      a[i] = a[i-1];
   }
   else{ 
   a[i] = cnt + a[i-1];
   cnt = 0;   
 
 }
}
 cnt = 0;
 b[n-1] = 0;
 for(int j = n-2; j >= 0; j--){
   if(str[j+1] == str[j] && str[j] == 'v'){
      cnt++;
      b[j] = b[j+1];
   } 
   else{
      b[j] = cnt + b[j+1];
      cnt = 0;
    
  }
 }

  for(int j = 0 ; j < n; j++){
   if(str[j] == 'o'){
   res += a[j] * b[j];
 }

}
cout << res << endl;
return 0;
}