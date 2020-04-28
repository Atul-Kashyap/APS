#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long N;
 cin >> N;
 while(N){
  long long res = (N * (N+1) * (2*N+1))/6;
  cout << res << endl;
  cin >> N;
 }
 return 0;
}