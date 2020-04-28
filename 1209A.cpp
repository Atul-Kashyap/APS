#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<pair<int,int>> pii;
int a[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n,res = 0; cin >> n;
 for(int i = 0; i < n; i++) cin >> a[i];
 sort(a,a+n);
 for(int i = 0; i < n-1; i++){
   // cnt = 0;
   if(a[i] != 0){
   for(int j = i+1; j < n; j++){
      if(a[j] != 0){
      if((a[j] % a[i]) == 0){
         a[j] = 0;
      //   cnt++;
       //  cout << i << "  " << j << endl;
     }
   }
  }
   //   if(cnt > 0) res++;
 }
 else 
   continue;
}
 for(int i = 0; i < n; i++)
 if(a[i] > 0) res++;

 cout << res << endl;
return 0;
}
