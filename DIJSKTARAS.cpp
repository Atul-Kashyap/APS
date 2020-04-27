/*         1.........2
           . .    1  .
           .   .4    . 1
          7.     .   .
           .       . .
           4........3
               2

 */
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
      unordered_map<T,list<pair<T,int> > > m;
public:             
       void addedge(T u, T v, int dist, bool bidir = true){
            m[u].push_back(make_pair(v,dist));
            if(bidir){
              m[v].push_back(make_pair(v,dist));
            }
      } 
      void print(){
           for(auto j : m){
            cout << j.first << "->";
            for(auto l : j.second){
              cout << "(" << l.first << " " << l.second << ")";
            }
           cout << endl;                          
          }
     }
     void dijsktrassp(T src){
          unordered_map<T, int > dist;
          for(auto j : m){
             dist[j.first] = INT_MAX;   
          }

          set<pair<int,T> > s;
          dist[src] = 0;
          s.insert(make_pair(0,src));


          while(!s.empty()){
             auto p = *(s.begin());
             T node = p.second;
             int nodeDist = p.first;
             s.erase(s.begin());
             
             for(auto childpair : m[node]){
                if(nodeDist + childpair.second < dist[childpair.first]){
                   T dest = childpair.first;
                   auto f = s.find(make_pair(dist[dest],dest));
                   if(f != s.end()){
                      s.erase(f);
                   }

                  dist[dest] = nodeDist + childpair.second;
                  s.insert(make_pair(dist[dest], dest));
                }


             }
          }
          for(auto d : dist){
           cout << d.first << " is located at distance of " << d.second << endl;
          }


     }
};

int main(){
    Graph<int>g;
   /* g.addedge(1,2,1);
    g.addedge(1,3,4);
    g.addedge(2,3,1);
    g.addedge(3,4,2);
    g.addedge(1,4,7); 
    //g.printadj();
    g.dijsktrassp(1); */

    g.addedge(0,1,2);
    g.addedge(1,2,4);
    g.addedge(0,2,8);
    g.dijsktrassp(0);

 return 0;
}










