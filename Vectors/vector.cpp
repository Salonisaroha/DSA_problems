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
v.push_back(1);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(2);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(3);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(4);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.resize(5);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.pop_back();
v.pop_back();
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

vector<int> val;
for(int i=0; i<5; i++){
    int element;
    cin>>element;
    val.push_back(element);
}
for(int i=0; i<val.size(); i++){
    cout<<val[i]<<" ";
}
cout<<endl;
v.insert(val.begin() + 2, 9);

for(int idx : val){
    cout<<idx<<" ";
}
cout<<endl;
v.erase(val.begin()-2);

int idx = 0;
while(idx<val.size()){
    cout<<val[idx++]<<" ";

}


}