#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long q,n,k,a;
 vector<int> v;
 cin >> q;
 while(q--){ 
  cin >> n >> k;
  for(int i = 0; i < n; i++){
      cin >> a;
      v.push_back(a);
  }
  sort(v.begin(),v.end());
  
  if(abs(v[n-1] -(v[0] + k)) <= k && abs(v[0] + k) > 0)
  cout << v[0]+k << endl;
  else  if(abs(v[0] -v[n-1]) <= k && abs(k - v[n-1]) > 0 )
  cout << abs(v[n-1] - k) << endl;
  else
  cout << -1 << endl;
  v.clear();
 }
return 0;
}