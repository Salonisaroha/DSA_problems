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
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
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
int searchItr(int key){
    Node* temp = head;
    int idx = 0;
    while(temp != NULL){
        if(temp->data==key){
            return idx;

        }
        temp = temp->next;
        idx++;
    }
    return -1;
}  
};
int main(){
List ll;
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
// ll.push_front(0);
ll.printList();
cout<<ll.searchItr(3)<<endl;
cout<<ll.searchItr(40);

}