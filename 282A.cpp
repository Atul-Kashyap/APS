#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
int n,cnt=0;
cin >> n;
string s;
f(i,0,n){
 cin>>s;
  if(s=="X++" | s=="++X")
   cnt++;
else
   cnt--;
s.clear();
}
cout<<cnt<<endl;
return 0;
}