#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll n,res;
 cin >> n;
 if(n < 10)  res = 1 * (n+1) - 1;
 else if(n < 100) res = 2 * (n+1) - 11;
 else if(n < 1000)  res = 3 * (n+1) -111;
 else if(n < 10000)  res = 4 * (n+1) - 1111;
 else if(n < 100000)  res = 5 * (n+1) - 11111;
 else if(n < 1000000)  res = 6 * (n+1) - 111111;
 else if(n < 10000000)  res = 7 * (n+1) - 1111111;
 else if(n < 100000000)  res = 8 * (n+1) - 11111111;
 else if(n < 1000000000)  res = 9 * (n+1) - 111111111;
 else if(n == 1000000000)  res = 8888888899;
  
cout << res << endl;
return 0;
}