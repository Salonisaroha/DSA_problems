#include<iostream>

using namespace std;
int binary(int  arr[], int s, int e, int key){
    int mid;
    if(s>e){
        return -1;
    }
    mid = s + (e-s)/2;
   if(arr[mid]== key){
    return mid;
   }
   else if (key>arr[mid]){
    return binary(arr, mid+1,e,key);
   }
   else{
    return binary(arr,s,mid-1, key);
   }
}

int main(){
    int arr[] ={2,3,4,5,7,9,10,13,14};
    int n = 9;
    int res = binary(arr,0,n-1,13);
    cout<<res;

}
