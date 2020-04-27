#include<bits/stdc++.h>
using namespace std;
int rod_cutting(vector<int> &p, int n){
    int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
           int max_prices = INT_MIN;
           for(int j = 1; j <= i; j++){
             max_prices = max(max_prices, dp[i-j] + p[j-1]);
         }
       dp[i] = max_prices;
      }
  return dp[n];
}

int main()
{
 int n; cin >> n;
 vector<int> p(n);
 for(int &a : p) cin >> a;
 cout << rod_cutting(p, n) << endl;
 return 0;
}