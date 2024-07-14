#include<Iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[], int n, int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n, i+1);
}

int firstOccur(vector<int>arr, int i, int target){
if(i==arr.size()){
return -1;
}
    if(arr[i]==target){
        return i;
    }
    return firstOccur(arr, i+1, target);
}

int lastOccur(vector<int>arr, int target,int i){
 if(i==arr.size()){
    return -1;
 }
    int idxFound = lastOccur(arr, target, i+1);
    if(idxFound == -1){
        if(arr[i]==target){
            return i;
        }
    }
    return idxFound;
}

int pow(int x, int n){
    if(n==0){
        return 1;
    }
    
  int halfPow =   pow(x, n/2);
  int halfPowSq = halfPow*halfPow;
  if(n%2!= 0){
    return x *halfPowSq;
  }
  return halfPowSq;
}
int main(){
int arr1[6] = {1,2,3,4,5,6};
int arr2[5] = {4,3,2,5,6};
cout<<isSorted(arr1,6,0)<<endl;
cout<<isSorted(arr2,5,0)<<endl;


// ques:- WAF to find the occurence of an element in vector.

vector<int> arr = {1,2,3,3,3,4};

cout<<firstOccur(arr, 0, 3)<<endl;


// ques:- WAF to find the last occurence of an element

cout<<lastOccur(arr, 3, 0)<<endl;

cout<<pow(2,10)<<endl;
}