#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Heap{
vector<int>vec;
public:
void push(int val){
// step 1
vec.push_back(val);
int x = vec.size()-1;
int parent = (x-1)/2;

while(parent>=0 && vec[x]>vec[parent]){
    swap(vec[x], vec[parent]);
    x = parent;
    parent = (x-1)/2;

}
}

void heapify(int i){ // i = parent

if(i>= vec.size() ){
    return ; 
}
int l = (2*i) + 1;
int r = (2*i) + 2;

int maxIdx = i;
if(l<vec.size() && vec[l]>vec[maxIdx]){
    maxIdx = l;
}
if(r<vec.size() && vec[r]>vec[maxIdx]){
    maxIdx = r;
}
swap(vec[i], vec[maxIdx]);
if(maxIdx != i){
    heapify(maxIdx);
}
}
void pop(){
// step 1
swap(vec[0], vec[vec.size()-1]);
// step 2
vec.pop_back();
// step 3
heapify(0);
}
int top(){
return vec[0];
}
bool empty(){
return vec.size()==0;
}

};

int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    while(!heap.empty()){
        cout<<"top = "<<heap.top()<<endl;
        heap.pop();
    }
    
    return 0;

}