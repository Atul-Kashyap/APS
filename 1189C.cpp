#include<bits/stdc++.h>
using namespace std;
//long long a[1000000];
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long n,q,l,r;
 cin >> n;
 vector<int> a(n);
 for(long long i = 0; i < n; i++)
 cin >> a[i];
 vector<int> v(n+1);
 for(int i = 1; i <= n; i++) v[i] = v[i-1] + a[i-1];
 cin >> q;
 while(q--) {
   cin >> l >> r; cout << (v[r] - v[l-1])/10 << endl;        
 }
return 0;
}