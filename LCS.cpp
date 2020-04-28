#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);
 string s1,s2; cin >> s1 >> s2;
 int n1 = s1.size();
 int n2 = s2.size();
 int dp[n1+1][n2+1];
 for(int i = 0; i <= n1; i++){
    for(int j = 0; j <= n2; j++){
       if(i == 0 || j == 0 )
          dp[i][j] = 0;
       else if(s1[i-1] == s2[j-1])
          dp[i][j] = dp[i-1][j-1] + 1;
       else
          dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
   }
 }
 cout << dp[n1][n2] << endl;

 return 0;
}