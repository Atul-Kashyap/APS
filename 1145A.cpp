#include<bits/stdc++.h>
using namespace std;
int thansort(int v[],int l,int r){
 if(is_sorted(v+l,v+r)) return r-l;

  else return max(thansort(v,l,(r+l)/2),thansort(v,(r+l)/2,r));
}
int main()
{
 int n,a[17]; cin>>n;
 for(int i=0;i<n;i++) cin>>a[i];
 cout<<thansort(a,0,n)<<endl;
 return 0;
}