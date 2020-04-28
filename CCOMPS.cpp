#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[100005];
bool vis[100005];
vector<int> comp;
inline int read() {int x=0,f=1;char c=getchar();while(c!='-'&&(c<'0'||c>'9'))c=getchar();if(c=='-')f=-1,c=getchar();while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();return f*x;}
void dfs(int s){
    vis[s] = true;
  //  comp.push_back(s);
    for(auto i : adj[s]){
     if(!vis[i]){
       dfs(i);
     }  

   }
}
void find_comp(){
     dfs(1);
     int connected = 1;
  //   for(int i = 1; i <= n; i++)
  //   cout << comp[i] << " ";
  //   cout << endl;
     for(int i = 1; i <= n; i++){
      if(!vis[i]){
       connected++;
      // comp.clear();
       dfs(i);       
      }
     }
    cout << connected << endl;
}
int main()
{
 n = read();
 m = read();
 int x,y;
 for(int i = 0; i < m; i++){
  x  = read();
  y =  read();
  adj[x].push_back(y);
  adj[y].push_back(x);
 }
 for(int i = 1; i <= n; i++)
 vis[i] = 0;
 find_comp();
 return 0;
}