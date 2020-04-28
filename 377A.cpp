#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
string s[600];
int visited[502][502];
int n,m,k;

int check(int a,int b){
 if(a>=0 && a<n && b>=0 && b<m)
    return 1; 
 return 0;
}

void dfs(int x,int y){
int nx,ny;
visited[x][y]=1;
for(int i=0;i<4;i++){
  nx=x+dx[i];
  ny=y+dy[i];
  if(check(nx,ny) && s[nx][ny] == '.'){
   if(!visited[nx][ny])
    dfs(nx,ny);
  }
}
if(k>0){
k--;
 s[x][y]='X';
}
}
int main()
{
int flag=0;
 cin >> n >> m >> k;
 for(int i=0;i<n;i++)
 cin >> s[i];
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(s[i][j]=='.'){
       dfs(i,j);
       flag=1;
       break;
    }
  }
if(flag)
break;
}
for(int i=0;i<n;i++)
cout<<s[i]<<endl;
return 0;
}