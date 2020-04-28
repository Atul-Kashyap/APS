#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
typedef vector<int> vi;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n,a,res=0,i;
 float sum=0;
 vi v;
 cin>>n;
  f(i,n){
   cin>>a;
   sum+=a;
   v.pb(a);
  }
sort(v.begin(),v.end(),greater<int>());
for(i=0;i<n;i++){
 res+=v[i];
if(res>sum/2)
break;
}
cout<<i+1<<endl;
return 0;
}