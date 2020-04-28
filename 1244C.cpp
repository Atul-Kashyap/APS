#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 int n,p,w,d; cin >> n >> p >> w >> d;
 if( (p/w + (p%w) ) > n )
 cout << -1 << endl;
 else
 cout << (p - (p%3))/3 << " " << p % 3 << " " << (n - ((p - (p%3))/3 + p%3)) << endl; 
 return 0;
}