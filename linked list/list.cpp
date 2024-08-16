#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next = NULL;
    }
};
class List{
  Node* head;
  Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val); // dynamic storage of new node.
        if(head==NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
};

// Four main functions in linked list are:-
// push front, push back, pop front, pop back   
int main(){
    List ll;  // Correct way to create an object of the List class
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    return 0;
}

