#include<iostream>
#include<vector>
using namespace std;

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

Node* buildBST(int arr[], int st, int end) {
    if (st > end) {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node* curr = new Node(arr[mid]);
    curr->left = buildBST(arr, st, mid - 1);
    curr->right = buildBST(arr, mid + 1, end);
    return curr;
}

void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node* buildBSTfromVector(vector<int>& arr, int st, int end) {
    if (st > end) {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node* curr = new Node(arr[mid]);
    curr->left = buildBSTfromVector(arr, st, mid - 1);
    curr->right = buildBSTfromVector(arr, mid + 1, end);
    return curr;
}

void getInorder(Node* root, vector<int>& nodes) {  // Pass by reference
    if (root == NULL) {
        return;
    }
    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}

Node* balanceBST(Node* root) {
    vector<int> nodes;
    getInorder(root, nodes);  // Now stores inorder traversal into the nodes vector
    return buildBSTfromVector(nodes, 0, nodes.size() - 1);  // Return the new balanced BST
}

int main() {
    Node* root1 = new Node(6);
    root1->left = new Node(5);
    root1->left->left = new Node(4);
    root1->left->left->left = new Node(3);

    root1->right = new Node(7);
    root1->right->right = new Node(8);
    root1->right->right->right = new Node(9);

    root1 = balanceBST(root1);  // Now root1 points to the balanced tree
    preorder(root1);  // Print the preorder traversal of the balanced tree
    return 0;
}
