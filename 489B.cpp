#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long n,m,cnt = 0,a;
 vector<long long> v1,v2;
 cin >> n ;
 for(int i=0; i<n; i++){
  cin >> a;
  v1.push_back(a);
 }
 cin >> m;
 for(int i=0; i<m; i++){
  cin >> a;
  v2.push_back(a);
 }
 sort(v1.begin(),v1.end());
 sort(v2.begin(),v2.end());
 int i=0,j=0;
 while(i != n && j != m){
    if(abs(v1[i] - v2[j]) <= 1){
     i++;
     j++;
     cnt++;
   }
   else {
    if(v1[i] > v2[j] )
     j++;
    else
     i++;
   }
 
 }
 cout << cnt << endl;
return 0;
}