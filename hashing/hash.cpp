#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
string key;
int val;
Node* next;

Node(string key, int val){
    this->key = key;
    this->val = val;
    next = NULL;
}
};
class HashTable{
    int totSize;
    int currSize;
    Node** table;
public:
HashTable(int size){
    totSize = size;
    currSize = 0;
    table = new Node*[totSize];
    for(int i=0; i<totSize; i++ ){
        table[i]= NULL;
    }
}

int HashFunction(string key){
    int idx = 0;
    for(int i=0; i<key.size(); i++){
        idx = idx + (key[i]*key[i])%totSize;
    }
    return idx;
}
void insert(string key, int val){
    int idx = HashFunction(key);
    Node* newNode = new Node(key, val);
    Node* head = table[idx];
    newNode -> next = head;
    head = newNode;
    currSize++;


}
};

int main(){
    
}