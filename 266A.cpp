#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int n;
 int i=0,cnt=0;
 cin>>n;
 cin>>s;
 while(i!=n-1){
  for(int j=i+1;j<n;j++){
    if(s[i]==s[j])
       cnt++;
    i++;
   }
 }
cout<<cnt<<endl;
return 0;
}