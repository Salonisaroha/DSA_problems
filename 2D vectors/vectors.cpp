#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix = {{1,2,3}, {4,5,6},{7,8,9}, {10,11,12}};
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
// In 2d vectors it is not manadatory to have same number of columns, it also contain different columns.

vector<vector<int>>vec1 = {{10,20,30}, {40,50},{60}};
for(int i=0; i<vec1.size(); i++){
        for(int j=0; j<vec1[i].size(); j++){
            cout<<vec1[i][j]<<" ";
        }
        cout<<endl;
    }
vector<int> v;
for(int i=0; i<5;i++){
    v.push_back(i);
}
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
}