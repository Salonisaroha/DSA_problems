#include<iostream>
using namespace std;
int merge(int arr[], int start, int mid, int end){
    
        mid = start + (end-start)/2;
        int len1 = mid -start +1;
        int len2 = end - mid;
        int *first = new int[len1];
        int *second = new int[len2];
         int k = start;
         for(int i=0; i<len1; i++){
            first[i] = arr[k++];
         }
          k = mid + 1;
         for(int i=0; i<len2; i++){
            second[i] = arr[k++];
         }
         int index1 = 0;
        int index2 = 0;
       int mainIndexArray = start;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                arr[mainIndexArray++] = first[index1++];
            }
            else{
                arr[mainIndexArray++] = second[index2++];
            }
        }
        while(index1<len1){
            arr[mainIndexArray++] = first[index1++];
        }
        while(index2<len2){
            arr[mainIndexArray++] = second[index2++];
        }
    
}
void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, mid, e);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}