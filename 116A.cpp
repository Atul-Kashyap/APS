#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0) ;
cin.tie(0);
int n,res=0,minm=0,a,b;
cin >> n;
 f(i, n){
 cin>>a>>b;
 minm=max(res,minm);
 res=res-a+b;
 }
 minm=max(minm,res);
 cout<<minm<<endl;
return 0;
}