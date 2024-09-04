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

    void push_back(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* splitAtHead(Node* head) {
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL) {
            prev->next = NULL;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right) {
        List ans;
        Node* i = left;
        Node* j = right;
        while (i != NULL && j != NULL) {
            if (i->data <= j->data) {
                ans.push_back(i->data);
                i = i->next;
            } else {
                ans.push_back(j->data);
                j = j->next;
            }
        }
        while (i != NULL) {
            ans.push_back(i->data);
            i = i->next;
        }
        while (j != NULL) {
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }

    void mergeSort(Node*& head) {
        if (head == NULL || head->next == NULL) {
            return;
        }
        Node* rightHead = splitAtHead(head);
        mergeSort(head);
        mergeSort(rightHead);
        head = merge(head, rightHead);
    }

    void printList(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List myList;
    myList.push_back(5);
    myList.push_back(3);
    myList.push_back(8);
    myList.push_back(2);
    myList.push_back(7);

    cout << "Original List: ";
    myList.printList(myList.head);

    myList.mergeSort(myList.head);

    cout << "Sorted List: ";
    myList.printList(myList.head);

    return 0;
}
