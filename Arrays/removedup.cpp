#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
    int newArray[n];
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            continue;
            
        }
        else{
            newArray[i]= arr[i];
        }
    }
}
int main(){
int arr[5] = {1,1,2,3,4};
int n = 5;
removeDuplicate(arr,n);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

}