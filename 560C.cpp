#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
 ios_base::sync_with_stdio(false); cin.tie(0);
// double begin = clock();
 ll a1,a2,a3,a4,a5,a6; cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
 cout << ((a1+a2+a3)*(a1+a2+a3)) - (a1*a1) - (a3*a3) - (a5*a5) << endl;
// double end = clock();
// cout << (end - begin)/CLOCKS_PER_SEC << endl;
 return 0;
}
