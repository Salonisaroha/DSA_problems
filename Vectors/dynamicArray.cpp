#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec1 ={1,2,3,4,5};
cout<<vec1.size()<<"\n";
vector<int> vec2(10, -1);
cout<<"size of vector 2 is :- "<<vec2.size()<<"\n";

//access elements of vectors

for(int i=0; i<vec2.size(); i++){
    cout<<vec2[i]<<" ";
}
cout<<endl;
vector<int> vec= {1,2,3,4};
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
vec.push_back(5);
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
vec.push_back(6);
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
cout<<endl;
}