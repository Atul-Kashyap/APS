/*  1.............0
    .              .     
    .              .
    .              .
    .              .
    .              .
    2............. 4
    .              .
     .            .
       .         .
         .      .
           .   .
    5........3

*/
     
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
      map<T,list<T> > adj;
public :
       Graph(){}
       void addEdge(T u,T v,bool bidir){
         adj[u].push_back(v);
         if(bidir){
         adj[v].push_back(u);
         }
       }
       void print(){
         for(auto i : adj){
          cout << i.first << "->";
        
         for(T entry : i.second){
          cout << entry << ",";
         }
         cout << endl;
       }
      }
      void dfshelper(T src,map<T,bool> &visited){
            visited[src] = true;
            cout << src <<  "  " ;
            for(T i : adj[src]){
             if(!visited[i]){
               dfshelper(i,visited);
             }
           }
      }
      void dfs(T src){
           map<T,bool> visited;
           dfshelper(src,visited);


     }
};
int main()
{
 Graph<int> g1;
 g1.addEdge(0,1,false);
 g1.addEdge(1,2,false);
 g1.addEdge(2,3,true);
 g1.addEdge(3,4,false);
 g1.addEdge(3,5,false); 
 g1.print();
 g1.dfs(0);
 return 0;
}