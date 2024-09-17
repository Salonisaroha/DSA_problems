#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

// Function to insert nodes into the BST
Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to build the BST from an array
Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for(int i = 0; i < n; i++){
        root = insert(root, arr[i]); // Corrected: passing arr[i]
    }
    return root;
}

// Inorder traversal of the BST
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool Search(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data<key){
        return Search(root->right, key);
    }
    else{
        return Search(root->left, key);
    }
}

int main(){
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node* root = buildBST(arr, 6);
    inorder(root);

    cout << endl;

    cout<<Search(root, 3);
    return 0;
}
