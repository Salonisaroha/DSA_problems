#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Syntax is :- vector<vector<data-type> vector_name
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4, 5, 6};
    vector <int>v3 = {7,8,9};
    vector<vector<int>> V = {v1,v2,v3};

    for(int i = 0; i<V.size(); i++){
        cout<<V[i];
    }
}