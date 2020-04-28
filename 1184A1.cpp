#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long r;
 cin >> r;
 if(r % 2 == 0 || r == 1 || r < 5)
 cout << "NO" << endl;
 else
 cout << 1 << " " << (r-3)/2 << endl;

return 0;
}