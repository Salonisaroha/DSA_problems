#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
Node(int val){
    data = val;
    next = NULL;
}

};
Node* insert(Node* last, int val){
    Node* newNode = new Node(val);
    if (last == nullptr) {
        newNode->next = newNode;
        return newNode;
    }

    newNode->next = last->next;
    last->next = newNode;
    return last;
}

void printList(Node* last){
  if(last == NULL) return;
  
    // Start from the head node
    Node* head = last->next;
    while (true) {
        cout << head->data << " ";
        head = head->next;
        if (head == last->next)
            break;
    }
    cout << endl;
}
Node *insertEnd(Node *tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == nullptr){
        // If the list is empty, initialize it with the new node
        tail = newNode;

        // Point to itself to form a circular structure
        newNode->next = newNode;
    }
    else{
        // Insert new node after the current tail
        // and update the tail pointer.
        // New node points to the head node
        newNode->next = tail->next;

        // Tail node points to the new node
        tail->next = newNode;

        // Update tail to be the new node
        tail = newNode;
    }
    return tail;
}
int main(){
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printList(last);

    // Insert 5 at the beginning
    last = insert(last, 5);

    cout << "List after inserting 5 at the beginning: ";
    printList(last);

    last = insertEnd(last, 5);
    last = insertEnd(last, 6);

    cout << "List after inserting 5 and 6: ";
    printList(last);

    return 0;
}
