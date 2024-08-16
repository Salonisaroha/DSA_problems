#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL; 
    }
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
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
        if(head != NULL){
            delete head;
            head = NULL; 
        } 
    }

    void push_front(int val){
        Node* newNode = new Node(val); // dynamic storage of new node.
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    void insert(int val, int pos){
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Position is invalid\n";
                delete newNode;
                return;
            }
            temp = temp->next;
        }
        if(temp == NULL){
            cout << "Position is invalid\n";
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        if(newNode->next == NULL) {
            tail = newNode;
        }
    }
    
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void pop_front(){
        if(head == NULL){
            cout << "Linked list is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Linked list is empty\n";
            return;
        }
        if(head->next == NULL){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
};

int main(){
    List ll;  
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    ll.insert(100, 2);
    ll.pop_front();
    ll.printList();
    return 0;
}
