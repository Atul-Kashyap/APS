#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
int arr[maxn];
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n,a,cnt=1;
// vector<int> v;
 cin >> n;
 for(int i = 0; i < n; i++){
 // cin >> a;
 // v.push_back(a);
 cin >> arr[i];
 }
 sort(arr,arr+n);
 for(int i = 0; i < n; i++){
  if(arr[i] >= cnt)
   cnt++;
 }
cout << cnt-1 << endl;
return 0;
}