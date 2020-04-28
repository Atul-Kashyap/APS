#include<bits/stdc++.h>
#define f(i,a,b) for(int i=0;i<n;i++)
using namespace std;
int main()
{
int n;
string s1,s2;
cin>>s1>>s2;
transform(s1.begin(),s1.end(),s1.begin(),::tolower);
transform(s2.begin(),s2.end(),s2.begin(),::tolower);
if(s1==s2)
cout<<0<<endl;
else if(s1>s2)
cout<<1<<endl;
else 
cout<<-1<<endl;
return 0;
}