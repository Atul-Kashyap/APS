#include<bits/stdc++.h>
#define pb push_back 
using namespace std;
typedef long long ll;
vector<ll> vis(3005);
vector<ll>adj[20005];

void bfs(ll s){
  queue<ll> q;
  q.push(s);
  vis[s] = true;
  while(!q.empty()){
   ll p = q.front();
   cout << p << " " ;
   q.pop();
   for(auto i : adj[p]){
     if(!vis[i]){
       vis[i] = true;
       q.push(i);
     }
   }
 }
 cout << endl;
}
 void addedge(int a,int b){
   adj[a].pb(b);
   adj[b].pb(a);
 
 }
int main()
{
 ll n,e,k,x,y;
 cin >> n >> e >> k;
 for(int i = 0; i < e; i++){
   cin >> x >> y;
   addedge(x,y);
 }
 bfs(1);
return 0;
}






//----------------------------------------283646/gawry/---------------------------------------------------
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int64;
typedef pair<int,int> p2;
typedef vector<int> vi;

#define ALL(t) t.begin(),t.end()
#define FOR(i,n) for (int i=0; i<(n); i++)
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)

template<typename T,typename TT> ostream &operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream &operator<<(ostream &s,vector<T> t){s<<"{";FOR(i,t.size())s<<t[i]<<(i==t.size()-1?"":",");return s<<"}"<<endl; }

#define MAX 3010
typedef pair<int,int> p2;
int c,n,m,k,x,y,z,prev[MAX][MAX];
vi s[MAX];
vector<p2> t[MAX];
main() {
  scanf("%d %d %d",&n,&m,&k);
  FOR(i,m){
    scanf("%d %d",&x,&y);
    s[x].push_back(y);
    s[y].push_back(x);
  }
  FOR(i,k){
    scanf("%d %d %d",&x,&y,&z);
    t[y].push_back(p2(x,z));
  }
  FOR(i,n)sort(t[i+1].begin(),t[i+1].end());
  vector<p2> q(1,p2(0,1));
  memset(prev,-1,sizeof(prev));
  prev[0][1]=0;
  FOR(i,q.size()){
    int x=q[i].first,y=q[i].second;
    if(y==n){
      vi r;
      while(y!=1){
        r.push_back(y);
        int z=prev[x][y];
        y=x;
        x=z;
      }
      printf("%d\n1",r.size());
      FOR(i,r.size())printf(" %d",r[r.size()-1-i]);
      puts("");
      return 0;
    }
    FOR(j,s[y].size())if(prev[y][s[y][j]]==-1){
      vector<p2>::iterator it=lower_bound(t[y].begin(),t[y].end(),p2(x,s[y][j]));
      if(it!=t[y].end()&&*it==p2(x,s[y][j]))continue;
      prev[y][s[y][j]]=x;
      q.push_back(p2(y,s[y][j]));
    }
  }
  puts("-1");
  return 0;
}
//------------------------------------284388/asgmelev/------------------------------------------------------------------


#ifdef ONLINE_JUDGE
#pragma comment(linker, "/STACK:16777216")
#endif

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <sstream>
#include <cstring>
#include <numeric>
#include <ctime>

#define re return
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int) (x).size())
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define y0 y32479
#define y1 y95874
#define fill(x, y) memset(x, y, sizeof(x))
#define sqr(x) ((x) * (x))
#define prev prev239
#define next next239
#define hash hash239
#define rank rank239

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef long long ll;
typedef double D;
typedef long double LD;

template<class T> T abs(T x) {return x > 0 ? x : -x;}

int n;
int m;

int mas[3000][3000], ans[3000][3000];
int prev[3000][3000];
int len[3000];
int k;

vii v[3000];

queue<ii> q;

void parse(ii z) {
    int x = z.fi;
    int p = z.se;
    int d = ans[x][p];

    int p1 = lower_bound(all(v[p]), mp(x, -1)) - v[p].begin();
    int p2 = lower_bound(all(v[p]), mp(x, n)) - v[p].begin();
    ii *pl = &v[p][p1];
    ii *pr = &v[p][p2];
    rep(i, len[x]) {
        int u = mas[x][i];
        if (ans[u][x] == 0)
        if (!binary_search(pl, pr, mp(x, u))) {
            ans[u][x] = d + 1;
            prev[u][x] = p;
            q.push(mp(u, x));
        }
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin >> n >> m >> k;
    rep(i, m) {
        int a, b;
        scanf("%d%d", &a, &b);
        a--;
        b--;
        mas[a][len[a]++] = b;
        mas[b][len[b]++] = a;
    }

    rep(i, k) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        a--;
        b--;
        c--;
        v[a].pb(mp(b, c));
    }

    rep(i, n)
    sort(all(v[i]));

    ans[0][0] = 1;
    q.push(mp(0, 0));
    while (!q.empty()) {
        parse(q.front());
        q.pop();
    }

    int bans = 1000000000;
    int bi = -1;
    rep(i, n)
    if (ans[n - 1][i] && bans > ans[n - 1][i]) {
        bans = ans[n - 1][i];
        bi = i;
    }

    if (bi == -1) {
        cout << -1 << endl;
        re 0;
    }

    cout << bans - 1 << endl;
    vi v;
    int tc = n - 1, tp = bi;
    while (tc != 0) {
        v.pb(tc);
        int tmp = prev[tc][tp];
        tc = tp;
        tp = tmp;
    }
    v.pb(0);
    reverse(all(v));
    rep(i, sz(v))
    cout << v[i] + 1 << ' ';
    cout << endl;

    re 0;
}
//----------------------------------------------------------------------