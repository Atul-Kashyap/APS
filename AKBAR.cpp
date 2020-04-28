#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<int,int> pii;
vector<vl> adj;
vl st(1000002);
vector<bool> vis;

void traverse(ll k){
  queue<ll> q;
  q.push(k);
  vis[k] = true;
  while(!q.empty()){
    ll p = q.front();
    q.pop();
    for(ll i :adj[p]){
      if(!vis[i]){
       vis[i] = true;
       q.push(i);
       if(st[p] > 0)
        st[i] = max(st[i],st[p]-1);
       
      }
    }
  }
}

int main()
{
 ll n,m,r,k,s,t,x,y,cnt;
 while(t--){
   vis.assign(n,false);
   adj.assign(2*r,vector<ll>());
   st.assign(n,-1);
   cnt = 1;
   cin >> n >> r >> m;
   rep(i,2*r){
     cin >> x >> y;
     adj[x].pb(y);
     adj[y].pb(x);
   }
   rep(i,m){
    cin >> x >> y;
    st[x] = y;
  }
  traverse(1);
  for(ll j:st){
   if(j>=0)
    cnt++;
  }
 // cnt == n ? cout << "YES" : cout << "NO";
 if(cnt == n)
 cout << "YES" <<endl;
 else
 cout << "NO " << endl;
 }
return 0;
}