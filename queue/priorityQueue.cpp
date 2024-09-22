#include<iostream>
#include<queue>
using namespace std;

int main(){
priority_queue<int, vector<int>,greater<int>>pq;
pq.push(10);
pq.push(7);
pq.push(9);
pq.push(23);
pq.push(3);
pq.push(12);
cout<<pq.top()<<endl;

while(!pq.empty()){
    cout<<pq.top()<<" ";
     pq.pop();
}


}