//Find the first repeating element in the array of integers.

#include<iostream>
using namespace std;
int firstRepeatingElement(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(arr[i]== arr[j]);
            return i;
        }
    }
    return -1;
}
int main(){
int arr[] = {10, 3,4,3,5,6,10};
int n = sizeof(arr)/sizeof(arr[0]);
int res = firstRepeatingElement(arr, n);
if (res==-1){
    cout<<"No repeating element found!";
}
else{
    cout<<"First repeating element is "<<arr[res];
}
}