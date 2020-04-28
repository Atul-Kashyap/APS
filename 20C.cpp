#include<bits/stdc++.h>
using namespace std;

long long arrival[100005], departure[100005], vis[100005], parent[100005];
vector<pair<int, int> > adj[100005];
int n, m;
void dijkstra(int source, int destination)
{
	for(int i=1;i<=n;i++)
	{
		arrival[i]=1e18;
		departure[i]=1e18;
		vis[i]=0;
	}
	arrival[source]=0;
	set<pair<int, int> > s;
	s.insert({0, source});
	while(!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		vis[x.second]=1;
		departure[x.second]=arrival[x.second];
		for(auto it:adj[x.second])
		{
			if(arrival[it.first] > departure[x.second] + it.second)
			{
				s.erase({arrival[it.first], it.first});
				arrival[it.first]=departure[x.second] + it.second;
				s.insert({arrival[it.first], it.first});
				parent[it.first]=x.second;
			}
		}
	}
	if(!vis[destination])
	{
		cout<<"-1";
		return;
	}
	int v=destination;
	vector<int> ans;
	while(parent[v])
	{
		ans.push_back(v);
		v=parent[v];
	}
	ans.push_back(source);
	reverse(ans.begin(), ans.end());
	for(auto it:ans)
		cout<<it<<" ";
}

void add_edge(int x, int y, int w){
  adj[x].push_back(make_pair(y,w));
  adj[y].push_back(make_pair(x,w));
}

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int x,y,w;
 cin >> n >> m;
 for(int i = 0; i < m; i++){
  cin >> x >> y >> w; add_edge(x,y,w);
 }
 dijkstra(1,n);
return 0;
}





