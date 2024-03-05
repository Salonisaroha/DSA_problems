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
int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j= start; j<end; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
        
    }
    swap(arr[i+1], arr[end]);
    return i+1;
}
void quickSort(int arr[], int s, int e){
    if(s<e){
      int pi = partition(arr, s, e);
        quickSort(arr,s,pi-1);
        quickSort(arr,pi+1,e);
    }
    
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

    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i = 0; i<n1; i++){
        cin>>arr1[i];
    }
    quickSort(arr1, 0, n1-1);
    for(int i=0; i<n1; i++){
        cout<<arr1[i]<<" ";
    }


}