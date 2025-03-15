#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int>* l;
    bool unDir;

public:
    // Constructor
    Graph(int v, bool unDir) {
        this->v = v;
        l = new list<int>[v];
        this->unDir = unDir;
    }

    // Function to add an edge
    void addEdge(int u, int v) {
        l[u].push_back(v);
        if (unDir) {
            l[v].push_back(u);
        }
    }

    // Function to print the graph's adjacency list
    void print() {
        for (int i = 0; i < v; i++) {
            cout << i << " -> ";
            for (int neighbor : l[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    // Helper function for cycle detection in a directed graph
    bool dirCycleHelper(int src, vector<bool>& vis, vector<bool>& recPath) {
        vis[src] = true;
        recPath[src] = true;

        for (int neighbor : l[src]) {
            if (!vis[neighbor]) {
                if (dirCycleHelper(neighbor, vis, recPath)) {
                    return true;
                }
            } else if (recPath[neighbor]) { // If neighbor is in recursion stack, cycle exists
                return true;
            }
        }

        recPath[src] = false; // Backtrack
        return false;
    }

    // Function to check if a cycle exists in a directed graph
    bool isCycleDir() {
        vector<bool> vis(v, false);
        vector<bool> recPath(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (dirCycleHelper(i, vis, recPath)) { // Return only if cycle is detected
                    return true;
                }
            }
        }
        return false; // If no cycle found
    }

    // Destructor to clean up memory
    ~Graph() {
        delete[] l;
    }
};

int main() {
    Graph graph(6, false); // Fix: Include the `unDir` argument

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.print();

    // Check for cycle
    if (graph.isCycleDir()) {
        cout << "Cycle detected in the directed graph" << endl;
    } else {
        cout << "No cycle detected in the directed graph" << endl;
    }

    return 0;
}
