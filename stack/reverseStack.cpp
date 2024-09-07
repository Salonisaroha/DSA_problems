#include<iostream>
#include<stack>
using namespace std;

// Function to push an element at the bottom of the stack
void pushAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}

// Function to reverse the stack
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s); // Recursively reverse the remaining stack
    pushAtBottom(s, temp); // Push the popped element at the bottom
}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    

print(s);
    // Testing pushAtBottom function
    pushAtBottom(s, 10);

    // Reversing the stack
    reverse(s);

    print(s);

    return 0;
}
