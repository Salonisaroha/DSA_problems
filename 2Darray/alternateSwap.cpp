#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void alternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
           // swap(arr[i], arr[i+1]);
           int temp = arr[i];
           arr[i]= arr[i+1];
           arr[i+1]= temp;
        }
    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
int arr[5];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
printArray(arr,n);
alternate(arr,n);
printArray(arr,n);
}