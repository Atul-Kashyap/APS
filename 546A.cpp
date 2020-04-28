#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a>>b>>c;
 int res=((c*(c+1))/2)*a;
 if((res-b)>=0)
 cout<<res-b<<endl;
  else 
   cout<<0<<endl;
return 0;
}