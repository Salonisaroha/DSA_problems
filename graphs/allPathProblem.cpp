#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

class Graph {
    int v;               // Number of vertices
    list<int> *l;        // Adjacency list

public:
    // Constructor to initialize the graph
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    // Add directed edge u -> v
    void addedge(int u, int v) {
        l[u].push_back(v);
    }

    // Print all paths from src to dest
    void pathHelper(int src, int dest, vector<bool>& vis, string path) {
        if (src == dest) {
            path += to_string(dest); // Add destination to the path
            cout << path << endl;    // Print the path
            return;
        }

        vis[src] = true;             // Mark current node as visited
        path += to_string(src) + " "; // Add current node to the path

        for (int neighbor : l[src]) { // Traverse all outgoing edges
            if (!vis[neighbor]) {
                pathHelper(neighbor, dest, vis, path); // Recursive call
            }
        }

        vis[src] = false;           // Backtrack: Unmark the current node
    }

    void printAllPath(int src, int dest) {
        vector<bool> vis(v, false); // Visited array for backtracking
        string path = "";           // Start with an empty path
        pathHelper(src, dest, vis, path);
    }
};

int main() {
    // Create a directed graph
    Graph graph(6);

    // Add directed edges
    graph.addedge(0, 1);
    graph.addedge(0, 2);
    graph.addedge(1, 3);
    graph.addedge(2, 3);
    graph.addedge(3, 4);
    graph.addedge(4, 5);
    graph.addedge(2, 5);

    // Print all paths from 0 to 5
    cout << "All paths from 0 to 5:" << endl;
    graph.printAllPath(0, 5);

    return 0;
}
