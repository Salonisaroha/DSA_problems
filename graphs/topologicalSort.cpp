#include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<queue>
using namespace std;
 class Graph{
  int V;
  list<int> *l;
  bool isUndir;
  public:
  Graph(int V, bool isUndir= true){
    this->V = V;
    l = new list<int>[V];
    this->isUndir = isUndir;
  }
void addEdge(int u, int v){
    l[u].push_back(v);
    if (isUndir){
        l[v].push_back(u);
    }
}
void topoHelper(int src, vector<bool>&vis, stack<int> & s){
    vis[src] =  true;
    list<int>neighbor = l[src];
    for(int V : neighbor){
        if(!vis[V]){
            topoHelper(V, vis, s);
        }
    }
    s.push(src);
}

void topoSort(){
    vector<bool> vis(V, false);
    stack<int>s;
    for(int i = 0; i<V; i++){
        if(!vis[i]){
            topoHelper(i, vis, s);
        }
    }
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
 };
int main(){
    Graph graph(6, false);
    graph.addEdge(2,3);
     graph.addEdge(3,1);
      graph.addEdge(4,0);
       graph.addEdge(4,1);
        graph.addEdge(5,0);
         graph.addEdge(5,2);
         graph.topoSort();
    
}