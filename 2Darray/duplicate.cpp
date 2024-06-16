#include<iostream>
using namespace std;
int duplicate(int *arr, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i=0; i<n; i++){
        ans = ans^i;
    }
    cout<<ans;
    return ans;
}
int sorted(int arr[][4], int n, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==key){
                cout<<arr[i][j];
            }
        }
    }
    return key;
}
int main(){
//int arr[7] = {1,2,3,4,5,6,6};
//duplicate(arr,7);
int arr[4][4]={
    {10,20,30,40,},
    {15,25,35,45},
    {27,29,37,48},
    {32,33,39,50}
};
int n = 4;
sorted(arr,n,33);
}
