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
};
int main()
{
 Graph<int> g1;
 g1.addEdge(1,2,false);
 g1.addEdge(1,3,false);
 g1.addEdge(2,3,true);
 g1.addEdge(3,5,false);
 g1.print();

 Graph<char> g2;
 g2.addEdge('A','B',false); 
 g2.addEdge('B','C',false);
 g2.addEdge('C','D',true);
 g2.print();


 return 0;
}