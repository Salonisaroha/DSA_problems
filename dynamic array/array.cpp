#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cin>>rows;
    cin>>columns;
    int* *matrix = new int*[rows];
    for(int i=0; i<rows; i++){
        matrix[i]= new int[columns];
    }
    int x =1;
    for(int i=0; i<rows;i++){
        for(int j=0; j<columns; j++){
            matrix[i][j]=x;
            cout<<matrix[i][j]<<" ";
            x++;
        }
        cout<<endl;
    }
}