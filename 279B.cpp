#include<bits/stdc++.h>
int arr[100005];
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n,t; cin >> n >> t;
 vector<int> v(n);
 for(int &a : v ) cin >> a;
 int l = 0, r = 0, sum = 0, maxm = 0;
 while(r <= n){
 if( sum <= t) maxm = max(maxm,r-l);
 if(sum > t){
  l++;
  sum -= v[l-1];
 }
 else {
   r++;
   sum += v[r-1];
 }
}
cout << maxm << endl;
return 0;
}