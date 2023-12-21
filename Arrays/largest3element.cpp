#include<iostream>
using namespace std;
int largest3element(int arr[], int n){
    if(n<3){
        cout<<"invalid input";
    }
    int first, second, third;
   first=second=third=INT8_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]!= first){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third && arr[i]!= first && arr[i]!= second){
            third = arr[i];
        }
      
    }
     cout<<"Three largest elements are :-"<<first<<" "<<second<<" "<<third<<endl;
}
int main(){
int arr[] = {23, 45, 56, 12 ,34,90, 89};
int n = sizeof(arr)/sizeof(arr[0]);
largest3element(arr,n);
return 0;
}
