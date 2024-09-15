#include<iostream>
#include<vector>
#include<queue>

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

static int idx = -1;

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

// preorder traversal
void preOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// inorder traversal
void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// postorder traversal
void postOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// level order traversal
void levelOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if (curr == NULL) {
            cout << endl;
            if (q.empty()) {
                break;
            }
            q.push(NULL);
        } else {
            cout << curr->data << " ";
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
}

// height of binary tree
int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt, rightHt) + 1;
    return currHt;
}

// counting of nodes 
int count(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftC = count(root->left);
    int rightC = count(root->right);
    int currC = leftC + rightC + 1;
    return currC;
}

// sum of nodes in the binary tree
int sum(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int sumL = sum(root->left);
    int sumR = sum(root->right);
    int currS = sumL + sumR + root->data;
    return currS;
}

// diameter calculation (method 1)
int dia1(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int currDia = height(root->left) + height(root->right);
    int leftD = dia1(root->left);
    int rightD = dia1(root->right);

    return max(currDia, max(leftD, rightD));
}

// diameter calculation (method 2)
pair<int, int> dia2(Node* root) {
    if (root == NULL) {
        return make_pair(0, 0); // (diameter, height)
    }

    pair<int, int> leftInfo = dia2(root->left);
    pair<int, int> rightInfo = dia2(root->right);

    int currDia = leftInfo.second + rightInfo.second + 1; // Current diameter
    int finalDiam = max(currDia, max(leftInfo.first, rightInfo.first)); // Max diameter so far
    int finalht = max(leftInfo.second, rightInfo.second) + 1; // Current height (add 1 for root)

    return make_pair(finalDiam, finalht);
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    idx = -1; // Reset index
    Node* root = buildTree(nodes);
    cout << "Root: " << root->data << endl;

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    levelOrder(root);
    cout << endl;

    cout << "Height: " << height(root) << endl;

    cout << "Number of nodes: " << count(root) << endl;

    Node* root2 = new Node(5);
    root2->left = new Node(3);
    root2->right = new Node(4);

    cout << "Count of binary tree (root2): " << count(root2) << endl;
    cout << "Height of binary tree (root2): " << height(root2) << endl;

    cout << "Sum of binary tree (root): " << sum(root) << endl;
    cout << "Sum of binary tree (root2): " << sum(root2) << endl;

    cout << "Diameter of binary tree (dia1): " << dia1(root) << endl;

    cout << "Diameter of binary tree (dia2): " << dia2(root).first << endl;

    return 0;
}
