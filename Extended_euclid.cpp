//EXTENDED EUCLIDIAN ALGORITHM

// AX + BY = GCD(A, B)  ......(1)
// BX1 + (A%B)Y1 = GCD(B, A%B)
// A%B = A - (A/B) * B
// BX1 + (A - (A/B) * B)Y1 = GCD(B, A%B) .......(2)
// FROM 1 && 2 EQN.
// X = Y1
//Y = X1 - (A/B)*Y1
//BASE CASE X = 1, Y = 0, GCD = A; B == 0
//e.g  18X + 12Y = GCD(18,12)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x,y;
void extend_Euclid(ll a, ll b)
{
 if( b == 0){
   x = 1;
   y = 0;
   return;
 }
  extend_Euclid(b, a%b);
  int cx = y;
  int cy = x - (a/b) * y;
 
  x = cx;
  y = cy;
}

int main()
{

 // 18x + 12y = gcd(18,12)
 extend_Euclid(18,12);
 cout << x << " " << y << endl;

 return 0;
}