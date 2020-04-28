#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long n,m;
 cin >> n >> m;
 long long res = 0;
 if(m % 2 == 0)
 res = m/2;
 else 
 res = m/2 + 1;
 n = n/2-1;
 if(m % 3 == 2)
 m = m/3 + 1;
 else
 m = m/3;
 res += n * m;
 cout << res << endl;
return 0;
}