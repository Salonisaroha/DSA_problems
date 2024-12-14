#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;


class Graph{
    int v;
    list<int> *l;
public:
Graph(int v){
    this->v = v;
    l = new list<int>[v];
}
void addedge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
}
void print(){
    for(int u =0; u<v; u++){
        list<int> neighbors = l[u];
        cout<<u<<":";
        for(int v : neighbors){
            cout<<v<< " ";
        }
        cout<<endl;
    }
}
void bfs(){
    queue<int> q;
    vector<bool> vis(v, false);
    q.push(0);
    vis[0]= true;
    while(q.size()>0){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        list<int> neighbors = l[u];
        for(int v : neighbors){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
            }
        }
    }
cout<<endl;
}

void dfs(int u, vector<bool> &vis){
    vis[u] = true;
    cout<<u<<" ";
    list<int> neighbors = l[u];
    for(int v : neighbors){
        if(!vis[v]){
            dfs(v, vis);
        }
    }

}
bool helper(int src, int dest, vector<bool> &vis){
    if(src==dest){
        return true;
    }
    vis[src]= true;
    list<int>neighbors = l[src];
    for(int v : neighbors){
        if(!vis[v]){
            if(helper(v, dest, vis)){
                return true;
            }
        }
    }
    return false;
}
bool hasPath(int src, int dest){
    vector<bool> vis(v, false);
    return helper(src, dest, vis);
}
 // Cycle detection in undirected graph
bool underCycleHelper(int src, int par, vector<bool> &vis){
    vis[src] = true;
    list<int> neighbors = l[src];
    for(int v : neighbors){
        if(!vis[v]){
            if (underCycleHelper(v, src, vis)){
                return true;
            }
        } else{
            if(v!= par){
                return true;
            }
        }
    }
    return false;
}
bool dfsCycle(){
 vector<bool> vis(v, false);
  return underCycleHelper(0, -1, vis);
   
}
bool isBipartite() {
    queue<int> q;
    vector<bool> vis(v, false);
    vector<int> color(v, -1);  // -1 means uncolored
    for (int i = 0; i < v; i++) { // Handle disconnected components
        if (!vis[i]) {
            q.push(i);
            color[i] = 0;  // Start coloring with 0
            vis[i] = true;

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int neighbor : l[curr]) { // Iterate over neighbors
                    if (!vis[neighbor]) {
                        vis[neighbor] = true;
                        color[neighbor] = 1 - color[curr]; // Alternate color
                        q.push(neighbor);
                    } else if (color[neighbor] == color[curr]) {
                        return false; // Adjacent nodes have the same color
                    }
                }
            }
        }
    }
    return true;
}
void pathHelper(int src, int dest, vector<bool>& vis, string &path){
    if(src == dest){
        cout<<path<<dest<<endl;
        return;
    }
    vis[src] = true;
    path += to_string(src);
    list<int>neighbors = l[src];
    for(int v : neighbors){
        if(!vis[v]){
            pathHelper(v, dest, vis, path);

            
        }
    }
    path = path.substr(0, path.size()-1);
    vis[src] = false;
}
void printAllPath(int src, int dest){
    vector<bool> vis(v, false);
    string path = " ";
    pathHelper(src, dest, vis, path);
}
};
int main(){
    Graph graph(5);
    graph.addedge(0,1);
    graph.addedge(1,2);
    graph.addedge(2,3);
    graph.addedge(2,4);
    graph.addedge(4,1);
//     graph.addedge(0,5);
//     graph.addedge(5,4);
//     graph.addedge(0,1);
//      graph.addedge(0,2);
//       graph.addedge(1,3);
//        graph.addedge(2,3);
// vector<bool> vis(7,false);

//     graph.print();
//     graph.bfs();
//     graph.dfs(0, vis);
//     graph.hasPath(0,5);
//     cout<<graph.dfsCycle()<<endl;
cout<<graph.isBipartite()<<endl;




}