#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    // maps are self container.
    map<int, string>m;
    m[100] = "Ronika";
    m[101] = "riya";
    m[102] = "niharika";
    m[103] = "suhani";
cout<<m[100]<<endl;
cout<<m[101]<<endl;
cout<<m[103]<<endl;
m[103] = "Saloni";
cout<<m[103]<<endl;


// printing the key value pair 
for(auto it: m){
    cout<<"Keys :- "<<it.first<<"  value :- "<<it.second<<endl;
}
}
