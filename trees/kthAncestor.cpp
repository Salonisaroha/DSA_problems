#include <iostream>
#include <vector>
using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

// Build tree function
Node* buildTree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

// Kth Ancestor function
int KthAncestor(Node* root, int node, int k) {
    if (root == NULL) {
        return -1;
    }
    if (root->data == node) {
        return 0;
    }

    int leftDist = KthAncestor(root->left, node, k);
    int rightDist = KthAncestor(root->right, node, k);

    if (leftDist == -1 && rightDist == -1) {
        return -1;
    }

    int validVal = (leftDist == -1) ? rightDist : leftDist;

    if (validVal + 1 == k) {
        cout << "Kth ancestor is: " << root->data << endl;
    }
    return validVal + 1;
}

int main() {
    // Example tree represented in level-order with -1 as NULL:
    // Tree:        1
    //            /   \
    //           2     3
    //          / \
    //         4   5
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};

    // Build the tree
    Node* root = buildTree(nodes);

    // Find the 2nd ancestor of node 4
    int node = 4;
    int k = 1;
    cout << "Finding " << k << "th ancestor of node " << node << "..." << endl;
    int result = KthAncestor(root, node, k);

    // If no ancestor is found
    if (result == -1) {
        cout << k << "th ancestor does not exist." << endl;
    }

    return 0;
}
