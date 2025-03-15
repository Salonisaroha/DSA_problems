#include <iostream>
#include <vector>
#include <list>
#include<queue>
using namespace std;

class Graph {
    int v;
    list<int>* l;
    bool unDir;

public:
    
    Graph(int v, bool unDir) {
        this->v = v;
        l = new list<int>[v];
        this->unDir = unDir;
    }

    
    void addEdge(int u, int v) {
        l[u].push_back(v);
        if (unDir) {
            l[v].push_back(u);
        }
    }

    
    void print() {
        for (int i = 0; i < v; i++) {
            cout << i << " -> ";
            for (int neighbor : l[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

  bool isBipartite(){
    queue<int>q;
    vector<bool>vis(v, false);
    vector<int> color(v, -1);
    q.push(0);
    color[0] = 0;
    while(q.size()>0){
        int curr = q.front();
        q.pop();
        list<int>neighbors = l[curr];
        for(int v : neighbors){
            if(!vis[v]){
                vis[v] = true;
                color[v] = !color[curr];
                q.push(v);
            } else{
                if(color[v]==color[curr]){
                    return false;
                }
            }
        }
    }
    return true;
  }

  
};

int main() {
    Graph graph(5, true); // Fix: Include the `unDir` argument

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2,3);
   

    graph.print();
     cout<<graph.isBipartite()<<endl;
   
    return 0;
}
