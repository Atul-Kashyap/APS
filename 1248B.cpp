#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
//setbase - cout << setbase (16)a; cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 <<endl;prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val

using namespace std;
#define f(i, a, b) for (long long i = a; i < b; i++)
#define fe(i, a, b) for (long long i = a; i <= b; i++)
#define rep(i, n) f(i, 0, n)
#define fd(i, a, b) for (long long i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define ss second
#define ff first
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define sz(a) a.size()
#define inf (1000 * 1000 * 1000 + 5)
#define all(a) a.begin(), a.end()
#define tri pair<int, pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000 * 1000 * 1000 + 7)
#define pqueue priority_queue<int>
#define pdqueue priority_queue<int, vi, greater<int>>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
ll a[1000005];
int main()
{
 fastio;
 ll n,sum = 0; cin >> n;
 fe(i,1,n) { cin >> a[i];  sum += a[i];}
 sort(a+1,a+n+1);
 ll x=0,y=0;
 fe(i,1,n/2){ x += a[i]; }
 y = sum - x;
 cout << (x*x) + (y*y) << endl;


 return 0;
}
