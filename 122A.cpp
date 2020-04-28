#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
if(n%4==0|n%7==0|n%47==0|n%74==0|n%44==0|n%77==0|n%447==0|n%474==0|n%444==0|n%477==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}