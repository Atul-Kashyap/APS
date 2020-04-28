#include<bits/stdc++.h>
#define pb push_back
#define vlli vector<long long int>
#define f(i,b,n) for(int i=b;i<n;i++)
#define lli long long int
using namespace std;
int main()
{
lli n,k,a,i;
vlli v;
cin>>n>>k;
f(i,0,n){
cin>>a;
v.pb(a);
}
int cnt=0;
f(i,0,n){
if(v[k-1]<=v[i] & v[i]!=0)
cnt++;
else
break;
}
cout<<cnt<<endl;
return 0;
}