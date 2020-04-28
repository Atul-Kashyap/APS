#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
long long int n,l,a;
long long int maxm=0;
vector<long long int>v;
cin >> n >> l;
for(int i=0;i<n;i++){
 cin>>a;
 v.push_back(a);
}
sort(v.begin(),v.end());
a=0;
for(int i=0;i<n;i++){
long long int d=v[i]-a;
  maxm=max(maxm,d);
  a=v[i];
}
double m=v[0]-0;
double k=l-v[n-1];
double maxm1=maxm/2.0;
maxm1=max(maxm1,max(m,k));
cout<<fixed<<setprecision(10)<<maxm1<<endl;
return 0;
}