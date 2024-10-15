#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int>* l;

public:
    // Constructor
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    // Function to add an edge
    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // Function to print the graph's adjacency list
    void print() {
        for (int i = 0; i < v; i++) {
            cout << i << " -> ";
            for (int neighbor : l[i]) { // Directly iterate through the list
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    // Destructor to clean up memory
    ~Graph() {
        delete[] l;
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.print();

    return 0;
}
