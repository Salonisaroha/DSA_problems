// [1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1]

#include<iostream>
#include<vector>
#include<queue>

using namespace std;
class Node{
public:
int data;
Node* left;
Node* right;
Node(int data){
    this->data = data;
    left=right=NULL;
    }
};
static int idx = -1;

Node* buildTree(vector<int> nodes){
idx++;
if(nodes[idx]== -1){
    return NULL;
}
nodes[idx];
Node* currNode = new Node(nodes[idx]);

currNode->left = buildTree(nodes);
currNode->right = buildTree(nodes);

return currNode;
}

void preOrder(Node* root){

    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }
        else{
         cout<<curr->data<<" ";
        if(curr->left !=NULL){
            q.push(curr->left);

        }
        if(curr->right!= NULL){
            q.push(curr->right);
        }
        }
       
    }

}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(nodes);
    cout<<"root "<< root->data <<endl;

    preOrder(root);
    cout<<endl;

inOrder(root);
cout<<endl;
    

    postOrder(root);
    cout<<endl;

    levelOrder(root);
    cout<<endl;

    return 0;
}