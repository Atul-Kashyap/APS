#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 long long n,h,m,l,r,x;
 int a[100];
 cin >> n >> h >> m;
 int p = pow(h,2);
 for(int i=0;i<n;i++)
 a[i] = p;
 while(m--)
{
 cin >> l >> r >> x;
 int p = pow(x,2);
 for(int i=l-1;i<r;i++)
 a[i] = min(a[i],p);
}
 int sum = 0;
 for(int i=0;i<n;i++)
 sum += a[i];
 cout << sum << endl;

 return 0;
}