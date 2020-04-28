#include<bits/stdc++.h>
using namespace std;
#define m 10000007;
long long binexpo(long long a, long long b) {
 a %= m;
 long long res = 1;
 while (b > 0){
  if (b & 1)
  res = res * a % m;
  a = a * a % m;
  b >>= 1;
 }
 return res;
}
int main(){
 long long n,k,res;
 cin >> n >> k;
 while(n || k){
 res = (2*(binexpo(n-1,k) + binexpo(n-1,n-1)) + binexpo(n,k) + binexpo(n,n))%m;
 cout << res << endl;
 cin >> n >> k;
 }

return 0;
}