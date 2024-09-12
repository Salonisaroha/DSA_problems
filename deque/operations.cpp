#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq;
    deq.push_front(1);
     deq.push_front(2);
      deq.push_front(3);
       deq.push_front(4);
        deq.push_front(5);

while(!deq.empty()){
    cout<<deq.front()<<" ";
    deq.pop_front();
}

deq.push_back(10);
deq.push_back(20);
deq.push_back(30);
deq.push_back(40);
deq.push_back(50);


}