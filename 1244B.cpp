#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 int t; cin >> t;
 while(t--)
{
  int n,minm = 0,flag = 1,maxm = 0; cin >> n;
  string str; cin >> str;
 for(int i = 0; i  < n; i++){
  if(flag == 1 && str[i] == '1'){ minm = i + 1; flag = 0; }  
  else if(str[i] == '1') maxm = i + 1;
}
 if(maxm == 0)
 maxm = minm;
 if(minm == 0)
 cout << n << endl;
 else
 cout << max((( n - minm + 1) * 2),(maxm * 2)) << endl;
}
 return 0;
}