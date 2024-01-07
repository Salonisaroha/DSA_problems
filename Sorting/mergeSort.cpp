#include<iostream>
using namespace std;
void merge(int arr[], int beg, int mid,  int end){
    int i,j,k;
 
    int n1 = mid - beg +1;
    int n2 = end - mid;
    int LeftArray[n1], RightArray[n2];
    for(int i =0; i<n1; i++){
        LeftArray[i] = arr[beg + i];
         }
    for(int j=0; j<n2; j++){
        RightArray[j] = arr[mid + 1+ j];
    }
    i = 0;
    j = 0;
    k = beg;
    while(i<n1 && j<n2){
        if(LeftArray[i]<=RightArray[j]){
            arr[k] = LeftArray[i];
            i++;
        }
        else{
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = RightArray[j];
        j++;
        k++;
    }
   
}
void mergeSort(int arr[], int beg,  int end){
    if(beg>=end)
    return;
   int  mid = beg + (end-beg)/2;
    mergeSort(arr, beg, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, beg, mid, end);

}
void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}
int main(){
int arr[] = {23,11,12,10,4,90};
int n = sizeof(arr)/sizeof(arr[0]);
mergeSort(arr,0, n-1);
printArray(arr,n);
}