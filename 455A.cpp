#include<bits/stdc++.h>
using namespace std;
long long soln(long long cnt[],long long n){
 long long dp[100005];
 memset(dp,0,sizeof(dp));
 dp[0] = 0;dp[1]=cnt[1];
 for(long long i = 2; i<=100005 ; i++) dp[i] = max(dp[i-1], dp[i-2]+(cnt[i] * i));

 return dp[100005];
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long cnt[100005],n,a;
 memset(cnt,0,sizeof(cnt));
 cin >> n;
 for(int i=0; i<n; i++){ cin >> a; cnt[a]++;}
 long long res = soln(cnt,n);
 cout << res << endl;
return 0;
}