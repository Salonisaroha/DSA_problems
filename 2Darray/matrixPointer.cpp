#include<iostream>
using namespace std;
int find7(int mat[][3], int m, int n){
    int count0f7=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(mat[i][j]==7){
                cout<<"("<<i<<","<<j<<")";
                count0f7++;
            }
        }
    }
    return count0f7;
}
int matrixSum(int arr[][3],int n){
    int sum=0;
    for(int i=0; i<n; i++){
      sum += arr[1][i];

    }
    cout<<sum<<endl;
}
int main(){
int mat[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
int arr[3][3]={
{1,2,4},
{7,8,9},
{2,4,6},

};
find7(arr,3,3);
cout<<mat<<endl;
cout<<mat+1<<endl;
cout<<mat+2<<endl;
cout<<mat+3<<endl;
cout<<*(*mat+2)<<endl;
cout<<mat<<endl;
cout<<&mat[0][0]<<"=="<<&mat[0][1]<<endl;
matrixSum(arr,3);
}