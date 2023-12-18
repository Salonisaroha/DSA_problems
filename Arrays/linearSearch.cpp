#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}
int main(){
int arr[] = {12, 45, 56, 23, 12, 99};
int n = sizeof(arr)/sizeof(arr[0]);
int key;
cin>>key;
int res = linearSearch(arr,n, key);
cout<<res;
}