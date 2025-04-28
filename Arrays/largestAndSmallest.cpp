#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[], int n){
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > large){
            secondLarge = large;
            large = arr[i];
        } else if(arr[i] > secondLarge && arr[i] < large){
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

int secondSmallest(int arr[], int n){
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < small){
            secondSmall = small;
            small = arr[i];
        } else if(arr[i] < secondSmall && arr[i] > small){
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int main(){
    int arr[] = {10,70,20,30,45,12,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res1 = secondLargest(arr, n);
    int res2 = secondSmallest(arr, n);
    cout << "Second largest: " << res1 << endl;
    cout << "Second smallest: " << res2 << endl;
}
