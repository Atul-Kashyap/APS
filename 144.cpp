#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
string s;
int T,i;
cin>>T;
while(T--){
 cin>>s;
 sort(s.begin(),s.end());
 int n=s.size();
 int a = s[0] -'0';
 a++;
 for(i=1;i<n;i++){
  if(a==(s[i] - '0'))
    a++;
   else
     {
     cout<<"NO"<<endl;
      break;
      }
}
if(i==n)
cout<<"YES"<<endl;
}
return 0;
}