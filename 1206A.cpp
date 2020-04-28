#include<bits/stdc++.h>
#define rep(i,n) for(long long i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
//#define all(x) x.begin(),x.end()
//#define sort(x) sort(all(x))
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<pair<int,int>> pii;
int a[1000005];
int b[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 ll n,m; 
 cin >> n;
 rep(i,n) cin >> a[i];
 cin >> m;
 rep(i,m) cin >> b[i];
 sort(a,a+n);
 sort(b,b+m);
 cout << a[n-1] << " " << b[m-1] << endl;
return 0;
}
