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
        root = insert(root, arr[i]);
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

// Function to search for a key in the BST
bool Search(Node* root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(root->data < key){
        return Search(root->right, key);
    }
    else{
        return Search(root->left, key);
    }
}

// Function to get inorder successor (smallest node in the right subtree)
Node* getInorderSucc(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node* deleteNode(Node* root, int val){
    if(root == NULL){
        return NULL;
    }

    if(val < root->data){
        root->left = deleteNode(root->left, val); // Fix: Assign result to root->left
    }
    else if(val > root->data){
        root->right = deleteNode(root->right, val); // Fix: Assign result to root->right
    }
    else{
        // Node to be deleted is found
        if(root->left == NULL && root->right == NULL){ // No children (leaf node)
            delete root;
            return NULL;
        }
        if(root->left == NULL || root->right == NULL){ // One child
            Node* temp = root->left == NULL ? root->right : root->left;
            delete root;
            return temp;
        }

        // Node with two children: get the inorder successor (smallest in the right subtree)
        Node* IS = getInorderSucc(root->right);
        root->data = IS->data;
        root->right = deleteNode(root->right, IS->data); // Fix: Assign result to root->right
    }
    return root;
}
bool validateHelper(Node* root, Node* min, Node* max){
if(root==NULL){
    return true;
}
if(min!=NULL && root->data<min->data){
 return false;
}
if(max!= NULL && root->data>max->data){
    return false;
}
return validateHelper(root->left, min, root) && validateHelper(root->right, root, max);
}

bool validateBST(Node* root){
    return validateHelper(root, NULL, NULL);
}

int main(){
    int arr[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node* root = buildBST(arr, 9);
    
    // Inorder traversal before deletion
    inorder(root);
    cout << endl;

    // Searching for node 3
    cout << "Is 3 present? " << (Search(root, 3) ? "Yes" : "No") << endl;

    // Deleting node 4
    root = deleteNode(root, 4); // Fix: Assign result to root
    cout << "Inorder after deleting 4: ";
    inorder(root);
    cout << endl;

    int arr2[9] ={8,5,3,1,4,6,10,11,14};

    Node* root2 = buildBST(arr2,9);
    cout<<validateBST(root)<<endl;

    return 0;
}
