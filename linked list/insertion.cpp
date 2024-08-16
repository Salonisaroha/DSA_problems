#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int val){
   data=val;
   next=NULL; 
}
~Node(){
    if(next!=NULL){
        delete next;
        next= NULL;
    }
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
   ~List(){
    if(head!=NULL){
        delete head;
        head = NULL;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    }
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
    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp==NULL){
                cout<<"position is invalid\n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next= newNode;
    }
    
    void printList(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data << "->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    void pop_front(){
        if(head==NULL){
            cout<<"ll is empty\n";
            return;
        }
        Node* temp =head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){
                temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
};
int main(){
 List ll;  // Correct way to create an object of the List class
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    ll.insert(100, 2);
    ll.pop_front();
    ll.pop_back();
    ll.printList();
    return 0;
}