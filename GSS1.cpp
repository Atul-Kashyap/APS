#include<bits/stdc++.h>
using namespace std;
int t[500004];

void build(int arr[],int v,int tl,int tr){
 if(tl == tr)
 t[v] = tl;
 else{
  int tm = ( tl + tr )/2;
  build(arr,v*2,tl,tm);
  build(arr,v*2+1,tm+1,tr);
  t[v] = t[v*2] + t[v*2+1];
 }
}


int main()
{
 int a[500004],N,m,x,y,result =0;
 cin >> N;
 for(int i=0;i<N;i++)
 cin >> a[i];
 build(a,1,a[0],a[N-1]);
 cin >> m;
 while(m--){
  cin >> x >> y;
  result = sum(1,a[0],a[N-1],x,y);
  cout << result << endl;
 }

return 0;
}