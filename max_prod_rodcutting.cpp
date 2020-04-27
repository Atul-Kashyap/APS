#include<bits/stdc++.h>
using namespace std;
int max_prod_rodcutting(int n){
    int dp[n+1] = {0};
    for(int i = 2; i <= n; i++){
       for(int j = 1; j <= i/2; j++){
         dp[i] = max(dp[i], max(dp[i-j] * j, (i-j) * j));
      }                                              
    }
   return dp[n];
 }

int main()
{
 int n; cin >> n;
 cout << max_prod_rodcutting(n) << endl;
 return 0;
}