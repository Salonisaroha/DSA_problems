#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    if(s<=e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr,s, mid-1,key);
    }
}
bool linearSearch(int arr[], int n, int key){
if(n==0){
    return false;
}
if(arr[0]==key){
    return true;
}
else{
    int remainingpart = linearSearch(arr + 1, n-1, key);
    return remainingpart;
}
}
bool isSorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int fact(int n){
    if(n==0){
        return 1;
    }
    
    int res = n * fact(n-1);
    return res;
}
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
int fibonacci(int n){
   
   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }
   return fibonacci(n-1) + fibonacci(n-2);
}
int countDistinctWyToClimbStair(long long nStairs){
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    return countDistinctWyToClimbStair(nStairs-1) + countDistinctWyToClimbStair(nStairs-2);
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;

    int m;
    cin>>m;
    print(n);

    int x;
    cin>>x;
   
        cout<<fibonacci(x);
    
    // Question:- count ways to reach the n-th stairs.

    int y;
    cin>>y;
    int res = countDistinctWyToClimbStair(y);
    cout<<res;

// sorting using recursion

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

bool ans = isSorted(arr,n);
if(ans){
    cout<<"Array is sorted"<<endl;
}
else{
    cout<<"Array is not sorted"<<endl;
}

// Linear search using recursion
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int key;
cin>>key;
bool search = linearSearch(arr, n, key);
if(search){
    cout<<"Element is found !"<<endl;
}
else{
    cout<<"element is not found!"<<endl;
}
// binary search using recursion

int n;
cin>>n;
int arr[n];
for(int i = 0; i,n; i++){
    cin>>arr[i];
}
int key;
cin>>key;
bool res = binarySearch(arr,0, n-1, key);
if(res){
    cout<<"Element is found !"<<endl;
}
else{
    cout<<"Element is not found !"<<endl;
}
    
    return 0;
}