#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 long long n,m; cin >> n >> m ;
 long long n1 = max(n,m);
 long long n2 = min(n,m);
 long long t = min(n1/2,n2);
 long long maxm = t;
 for(int i = 1; i <= t; i++){
   if((n1 - 2*i) >= (n2 - i)/2)
   maxm = max(maxm, i + (n2 - i)/2);
 }
 cout << maxm << endl;

 return 0;
}