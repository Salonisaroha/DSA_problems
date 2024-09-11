#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
public:
Stack(){
    top = -1;
    size = 1000;
    arr = new int[size];
}

void Push(int data){
    top++;
    arr[top]=data;
}
int Pop(){
    int x = arr[top];
    top--;
    return x;
}
int Size(){
    return top+1;
}
int Top() {
    return arr[top];
  }

};
int main(){
Stack s;
  s.Push(6);
  s.Push(3);
  s.Push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.Pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}