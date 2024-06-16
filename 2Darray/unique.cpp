#include<iostream>
using namespace std;


int findUnique(int *arr, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    cout<<ans;
    return ans;
}
int main(){
    int arr[6] = {2,2,4,5,5,5};
    findUnique(arr,6);
    
}