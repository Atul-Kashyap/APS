class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    int n = coins.size(); 
    int dp[amount+1];
    for(int i = 0;i<=amount;i++)
     dp[i] = 999999;
    dp[0] = 0;
    for(int i = 1;i<=amount;i++){
       for(int j = 0;j<n;j++){
          if(coins[j] <= i){
          dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
         }
       }
     }
    return dp[amount];
    }  
};