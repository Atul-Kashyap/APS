#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long t,n,s,r;
 cin >> t;
 while(t--){ cin >> n >> s >> r;  cout << (n - min(r,s))+1 << endl; }
return 0;
}
