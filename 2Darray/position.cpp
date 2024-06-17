#include<iostream>
using namespace std;

void position(int arr[], int n) {
    // Sorting the array using bubble sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//Second approach

void pos(int arr[], int n, int s, int e){
    while(s<=e){
        if(arr[s]==0){
            s++;
        }
        else if(arr[e]==1){
            e--;
        }
        else if(arr[s]==1 && arr[e]==0){
            swap(arr[s], arr[e]);
        }

    }
}

int main() {
    int arr[] = {0, 1, 1, 0, 0, 1, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    position(arr, n);
    
    // Printing the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    pos(arr,n,0,n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
