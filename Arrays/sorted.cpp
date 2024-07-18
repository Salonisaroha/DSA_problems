#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    for(int i = 0; i<n; i++){
        if(arr[i]<arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
int arr[5] = {9,4,2,3,1};
int n = 5;
bool result = isSorted(arr,n);
cout<<result;
}