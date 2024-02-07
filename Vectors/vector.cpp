#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Vectors are dynamic arrays.It stores elements at contiguous block.
vector <int> values(10);
int vec = values.size();
int size = values.capacity();
// cout<<size<<endl;
// cout<<vec<<endl;

vector<int> v;
// v.push_back(1);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

// v.push_back(2);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

// v.push_back(3);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

// v.push_back(4);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

// v.resize(5);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

// v.pop_back();
// v.pop_back();
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

// vector<int> val;
// for(int i=0; i<5; i++){
//     int element;
//     cin>>element;
//     val.push_back(element);
// }
// for(int i=0; i<val.size(); i++){
//     cout<<val[i]<<" ";
// }
// cout<<endl;
// v.insert(val.begin() + 2, 9);

// for(int idx : val){
//     cout<<idx<<" ";
// }
// cout<<endl;
// v.erase(val.begin()-2);

// int idx = 0;
// while(idx<val.size()){
//     cout<<val[idx++]<<" ";

// }

vector <int> key(5);
for(int i=0; i<5; i++){
    cin>>key[i];
}

int x;
cout<<"Enter element to find occurance :- ";
cin>>x;
int occurances = -1;
int count = 0;
for(int j=0; j<key.size(); j++){
    if(key[j]== x){
       occurances = j;
       count++;
    }
}
cout<<occurances<<endl;
cout<<count;


int array[] = {1,2,1,2,1,2};
int ansum = 0;
for(int i =0; i<6; i++){
    if(i%2==0){
        ansum += array[i];
    }
    else{
        ansum -= array[i];
    }
}

}