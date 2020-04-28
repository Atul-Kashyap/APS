#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
typedef vector<int> vi;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,a,i,ar[5],res=0;
memset(ar,0,sizeof(ar));
float sum=0;
vi v;
cin>>n;
f(i,n){
cin>>a;
ar[a]++;
}
if(ar[2]%2==0){
res = ar[4]+(ar[2]/2);
ar[2]=0;
}
else
{
res = ar[4]+(ar[2]/2);
ar[2]=1;
}
if(ar[3]>=ar[1]){
res+=ar[3];
ar[1]=0;
}
else
{
res+=ar[3];
ar[1]=ar[1]-ar[3];
}
sum=ar[1]+(ar[2]*2);
res+=ceil(sum/4);
cout<<res<<endl;
return 0;
}
 