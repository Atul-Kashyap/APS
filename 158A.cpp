#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,k,a;
vector<long long int >v;
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>a;
v.push_back(a);
}
if(v[k-1]!=0){
int i=k;
int cnt=0;
while(v[k-1]==v[i] & i<n){
cnt++;
i++;
}
cout<<k+cnt<<endl;
}
else
{
int cnt=0;
for(int i=0;i<k-1;i++)
{
 if(v[i]==0)
 break;
  else
  cnt++;
}
cout<<cnt<<endl;
}
return 0;
}