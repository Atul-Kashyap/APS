
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
    5........3       */
 
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
      void bfs(T src){
       queue<T> q;
       map<T,bool> visited;

       q.push(src);
       visited[src] = true;

       while(!q.empty()){

        T node = q.front();
        cout << node << " ";
        q.pop();

         for(int neighbour : adj[node]){

             if(!visited[neighbour]){
              q.push(neighbour);
              visited[neighbour] = true;
            }
         }
       }

     }
};
int main()
{
 Graph<int> g1;
 g1.addEdge(0,1,false);
 g1.addEdge(1,2,false);
 g1.addEdge(2,3,true);
 g1.addEdge(2,4,false);
 g1.addEdge(3,5,false);
 g1.print();
 g1.bfs(0);
 cout << endl;

 Graph<char> g2;
 g2.addEdge('A','B',false); 
 g2.addEdge('B','C',false);
 g2.addEdge('C','D',true);
 g2.print();
 g2.bfs('A');


 return 0;
}