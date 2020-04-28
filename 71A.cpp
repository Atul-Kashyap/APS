#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
long long int T,n;
string s;
cin>>T;
while(T--){
cin>>s;
n=s.size();
if(n<=10)
cout<<s<<endl;
 else {
   cout<<s[0]<<n-2<<s[n-1]<<endl;
 }
}
return 0;
}