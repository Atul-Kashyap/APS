#include<bits/stdc++.h>
using namespace std;
int l[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n,maxm = 0,res = 0,a;
 cin >> n;
 for(int i = 0; i < n; i++){
  cin >> l[i];
  maxm = max(maxm,l[i]);
 }
vector<int> v[maxm + 1];
 for(int i = 0; i < n; i++){
  cin >> a;
  v[l[i]].push_back(a);
 }

 if(n == 1)
 cout << 0 << endl;
else if(n == 2 && l[0] == l[1])
 cout << 0 << endl;
else if(n == 2 && l[0] != l[1])
 cout << 2 << endl;
else{
 int sz = v[maxm].size();
 for(int i = 0; i < maxm; i++){
   int c = v[i].size();
   if(c >= sz){
     sort(v[i].begin(),v[i].end());
     int limit = sz/2;
    // limit = max(1,limit);
     for(int j = 0; (c-(j+1)) > limit; j++)
       res += v[i][j];
   }
 }
 cout << res << endl;
}
return 0;
}
