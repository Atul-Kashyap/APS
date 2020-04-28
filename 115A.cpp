#include<bits/stdc++.h>
#define pb push_back
#define rep(i,n) for(ll i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<int,int> pii;
vl adj[2005];
vl v;
int cnt[2005];
vector<bool> vis;
void dfs(ll k){
  vis[k]  = true;
  for(ll i : adj[k]){
     cnt[k-1]++;
   if(!vis[i]){
    dfs(i);
   }
  }
  
}
int main()
{
 ll n,a; 
 cin >> n;
 vis.assign(n,false);
 memset(cnt,0,20005);
 rep(i,n){
  cin >> a;
  if(a == -1)
  v.pb(i+1);
  else
  adj[i+1].pb(a);
 }
 ll p = v.size();
 rep(i,p){
  dfs(v[i]);
 }
 auto maxm = max_element(cnt,cnt+n);

 cout << *maxm << endl;
return 0;
}



/*

#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<list>
using namespace std;
int n;
list<int> L[2002];
bool vis[2002];
int ans,s[2002];
void dfs(int id,int dep){
    vis[id]=true;
    if(dep>ans) ans=dep;
    while(!L[id].empty()){
        int kk=L[id].back();
        if(!vis[kk]) dfs(kk,dep+1);
        L[id].pop_back();
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
        if(s[i]!=-1) L[s[i]].push_back(i);
    }
    memset(vis,false,sizeof(vis));
    ans=0;
    for(int i=1;i<=n;i++) if(!vis[i] && s[i]==-1) dfs(i,1);
    printf("%d\n",ans);
    return 0;
} */