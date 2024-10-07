#include<iostream>
#include<vector>
using namespace std;

int singleElementInSortedArray(vector<int>&arr){
    int n = arr.size();
    if(n==1)return arr[0];
    int st = 0, end = arr.size()-1;
    while(st<end){
        int mid = st + (end-st)/2;
        if(mid==0 && arr[0]!= arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1]!= arr[n-2])return arr[mid];
        if(arr[mid-1]!=arr[mid] && arr[mid]!= arr[mid+1]){
            return mid;
        }
        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                st = mid +1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
vector<int>v = {1,1,2,3,3,4,4,5,5};
cout<<singleElementInSortedArray(v)<<endl;
}