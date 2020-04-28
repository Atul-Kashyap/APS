#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define lli long long int 
using namespace std;
int main()
{
int n,i,cnt=0;
lli a,b,c;
cin >> n;
f(i,0,n){
cin>>a>>b>>c;
if(a+b+c>=2)
cnt++;
}
cout<<cnt<<endl;
return 0;
}