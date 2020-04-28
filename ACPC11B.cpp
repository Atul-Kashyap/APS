#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b;
vector<int>v1;
vector<int>v2;
cin>>n;
while(n--)
{
cin>>b;
for(int i=0;i<b;i++)
{
 cin>>a;
v1.push_back(a);
}
cin>>b;
for(int i=0;i<b;i++)
{
 cin>>a;
v2.push_back(a);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
int n=v1.size();
for(int i=0;i<n;i++)
{
 auto it =lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
  
}
 return 0;
}