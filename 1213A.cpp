#include<bits/stdc++.h>
#define rep(i,n) for(long long i = 1; i <= n; i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<pair<int,int>> pii;
int a[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 ll n,even = 0; cin >> n;
 for(int i = 0; i < n; i++){ cin >> a[i]; if(a[i] % 2 == 0) even++;}
 cout << min(even,n-even);
return 0;
}
