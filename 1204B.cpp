#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n,l,r; cin >> n >> l >> r;
 int min = ( n - l) * 1 + pow(2,l) - 1;
 int max = pow(2,r) - 1 + ( n-r ) * pow(2,r-1);
 cout << min << " " << max << endl;
return 0;
}

 