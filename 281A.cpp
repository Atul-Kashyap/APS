#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
if(((int)s[0]) >=97 & ((int)s[0]<=122)){
 int n=((int)s[0]);
 n=n-97;
 n=65+n;
 s[0]=char(n);
 }
 cout<<s<<endl;



return 0;
}