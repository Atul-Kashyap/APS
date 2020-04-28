#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
 long long n,res;
 cin >> n;
 if(n % 2 != 0)
 cout << 0 << endl;
 else
 { 
  res = n/2;
  res = binpow(2,res);
  cout << res << endl;
 }
return 0;
}