#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long n,res;
 cin >> n;
 res = ((n - 1) * 2 * n) + 1;
 cout << res << endl;
 return 0;
}