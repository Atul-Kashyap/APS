#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int q[10000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 int n; cin >> n;
 cin >> a[0];
 for(int i = 1; i < n; i++){ cin >> a[i]; a[i] += a[i-1]; }
 int m; cin >> m;
 for(int i = 0; i < m; i++) cin >> q[i];
 for(int i = 0; i < m; i++)
  cout << lower_bound(a,a+n,q[i]) - a + 1 << " ";
 cout << endl;
return 0;
}