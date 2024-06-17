#include<iostream>
using namespace std;
int pairSum(int arr[], int n, int s){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==s){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
            }
            
        }
    }
}
 int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
pairSum(arr,n,5);
 }