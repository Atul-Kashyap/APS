#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long n,p,k,a;
 vector<long long > v;
 cin >> n >> p >> k;
 for(long long i = 0; i < n; i++){
  cin >> a;
  long long res = (a %p * a%p) % p;
  res = (((res * res) % p) - ((a%p * k%p) % p)+p) % p;
  v.push_back(res);
 }
 sort(v.begin(),v.end());
 long long j = 0;
 long long cnt = 0;
 for(long long i = 0; i < n; i = j){
  j++;
  while(j < n && v[i] == v[j]){
   cnt += j - i;
   j++;
 }
 
}
 cout << cnt << endl;
return 0;
}