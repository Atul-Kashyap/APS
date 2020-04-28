#include<bits/stdc++.h>
using namespace std;
int reverse(int x)
{
int num=0,r;
while(x)
{
 r=x%10;
 num=num*10+r;
 x=x/10;
}
return num;
}

int main()
{
int n;
int a,b;
cin>>n;
while(n--)
{
 cin>>a>>b;
 int res=reverse(a)+reverse(b);
 cout<<reverse(res)<<endl;
}
return 0;
}