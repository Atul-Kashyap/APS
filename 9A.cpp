#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
 if(a == 0) return b;
 return gcd(b%a,a);
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int y,w,d; cin >> y >> w;
 d = 6 - max(y,w) + 1;
 cout << d/gcd(6,d) << "/" << 6/gcd(6,d) << endl;
return 0;
}