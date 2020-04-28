#include<bits/stdc++.h>
using namespace std;
long long binexpo(long long a, long long b, long long m) {
 a %= m;
 long long res = 1;
 while (b > 0) {
  if (b & 1)
  res = res * a % m;
  a = a * a % m;
  b >>= 1;
 }
 return res;
}
int main()
{
 long long a, b, t, res;
 cin >> t;
 while(t--){
 cin >> a >> b;
 res =  binexpo(a,b,10);
 res = res % 10;
 cout << res << endl;
 }
return 0;
}