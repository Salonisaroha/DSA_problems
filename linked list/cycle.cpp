#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void printlist() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

bool detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Cycle exists\n";
            return true;
        }
    }

    cout << "Cycle does not exist\n";
    return false;
}

void removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    // Detect the cycle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Cycle exists\n";
            isCycle = true;
            break;
        }
    }

    if (!isCycle) {
        cout << "Cycle does not exist\n";
        return;
    }

    // Remove the cycle
    slow = head;
    if (slow == fast) {
        // Special case where the cycle starts at the head
        while (fast->next != slow) {
            fast = fast->next;
        }
        fast->next = NULL; // Break the cycle
    } else {
        Node* prev = NULL;
        while (slow != fast) {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL; // Break the cycle
    }
}

int main() {
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // Create a cycle in the list
    ll.tail->next = ll.head;

    // Detect and remove the cycle
    detectCycle(ll.head);
    removeCycle(ll.head);
    ll.printlist();

    return 0;
}
