#include<iostream>
using namespace std;
int main(){
    int n = 5;

    // Time complexity :- 
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<i<<""<<j<<" ";
        }
        cout<<endl;
    }
}