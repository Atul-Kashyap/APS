#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n-1;i++)
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n,t;
 cin>>n>>t;
 int a[31111],d[31111];
 d[0]=1;
 f(i,n) cin>>a[i];
 f(i,n) if(d[i]) d[i+a[i]]=1;
 if(d[t-1]) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
return 0;
}