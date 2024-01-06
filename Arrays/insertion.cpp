#include<iostream>
using namespace std;

//insertion at end.
int insert(int arr[], int n, int key, int capacity){
    if(n>=capacity){    
        return n;
        
    }
    arr[n] = key;
        return (n+1);
}

//Insertion at any position.

void insertElement(int arr[], int n, int x, int pos)
{
    // shift elements to the right
    // which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
 
    arr[pos] = x;
}


int main(){
   
int arr[20] = {23,12,11,78,67,45};
int capacity = sizeof(arr)/sizeof(arr[0]);
int n = 6;
int key = 70;

n = insert(arr,n,key,capacity);
for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}

 int arr1[15] = { 2, 4, 1, 8, 5 };
    int n1 = 6;
 
    cout<<"Before insertion : ";
    for (int i = 0; i < n1; i++)
        cout<<arr1[i]<<" ";
 
    cout<<endl;
 
    int x = 10, pos = 2;
   
      //Function call
    insertElement(arr1, n1, x, pos);
    n++;
 
    cout<<"After insertion : ";
    for (int i = 0; i < n1; i++)
        cout<<arr1[i]<<" ";
 
}