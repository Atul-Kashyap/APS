#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159;
int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int L;
 cin >> L;
 while(L){
   float res = 0;
   res =(1/2.0)*(L*L)*(1/3.1415926);
   cout << fixed << res << setprecision(2) << endl;
  // printf("%.2f\n",res);
   cin >> L;
 }
return 0;
}