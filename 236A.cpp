#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
int i,ar[26];
memset(ar,0,sizeof(ar));
string str;
cin>>str;
int n=str.size();
f(i,n){
 int a=int(str[i])-97;
 ar[a]++;
}
int cnt=count_if(ar,ar+26,[](int elem){return elem>0;});
if(cnt%2==0)
cout<<"CHAT WITH HER!"<<endl;
else
cout<<"IGNORE HIM!"<<endl;
return 0;
}