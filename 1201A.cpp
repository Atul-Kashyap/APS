#include<bits/stdc++.h>
using namespace std;
int arr[100005][100005];
int v[100005];
int main()
{
 int n,m;
 string str;
 cin >> n >> m;
 while(n--){
  cin >> str;
  for(int i = 0; i < m; i++){
    arr[i][(int)str[i] - 65]++;
  }
 }
 for(int i = 0; i < n; i++) cin >> v[i];
 for(int i = 0; i < m; i++){
     for(int j = 0; j < n; j++){
       maxm = max(maxm,v[j]*cnt[i][j]);



    }

 }

return 0;
}