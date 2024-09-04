#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node* prev;

Node(int val){
    data = val;
    next = NULL;
    prev = NULL;
}
};
class DoublyList{
public:
    Node* head;
    Node* tail;
    DoublyList(){
        head=NULL;
        tail = NULL;
    }
void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }
    else{
          newNode->next = head;
    head->prev = newNode;
    head=newNode;
    }
  


}
void pop(){
   Node* temp = head;
    
    if(head!=NULL){
        head=head->next;
        temp->next = NULL;
        delete temp;
    }
}
void printList(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

};
 int main(){
DoublyList ll;
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);

ll.pop();
ll.printList();

return 0;
 }