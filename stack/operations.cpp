#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> vec;
public:
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        if (!isEmpty()) {
            vec.pop_back();
        }
    }
    
    int top() {
        if (!isEmpty()) {
            int lastIdx = vec.size() - 1;
            return vec[lastIdx];
        } else {
            cout << "Stack is empty, cannot fetch top element.\n";
            return -1;  // Return some invalid value in case of an empty stack
        }
    }
    
    bool isEmpty() {
        return vec.size() == 0;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}
