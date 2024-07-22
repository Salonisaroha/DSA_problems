#include<iostream>
using namespace std;
bool sum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
        
                return true;
            }
        }
    }
    return false;
}
int main(){
int arr[5] = {2,5,6,8,11};
int n=5;
cout<<sum(arr,n,14);
}